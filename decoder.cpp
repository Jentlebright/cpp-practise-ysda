#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <stdexcept>

using namespace std;

vector<bool> readFileBits(const string& filename) {
    ifstream file(filename, ios::binary);
    if (!file.is_open()) {
        throw runtime_error("Не удалось открыть файл: " + filename);
    }

    vector<bool> bits;
    char byte;
    
    while (file.get(byte)) {
        for (int i = 0; i < 8; ++i) {
            bits.push_back((byte >> i) & 1);
        }
    }
    
    return bits;
}

void writeFileBits(const string& filename, const vector<bool>& bits) {
    ofstream file(filename, ios::binary);
    if (!file.is_open()) {
        throw runtime_error("Не удалось создать файл: " + filename);
    }

    char byte = 0;
    size_t bitCount = 0;

    for (bool bit : bits) {
        byte = (byte << 1) | static_cast<char>(bit);
        ++bitCount;

        if (bitCount % 8 == 0) {
            file.put(byte);
            byte = 0;
        }
    }

    if (bitCount % 8 != 0) {
        file.put(byte);
    }
}

// текст в биты
vector<bool> encodeTextToBits(const string& text) {
    vector<bool> bits;
    
    for (char c : text) {
        for (int i = 0; i < 8; ++i) {
            bits.push_back((c >> i) & 1);
        }
    }
    
    return bits;
}

// декод битов в текст
string decodeBitsToText(const vector<bool>& bits) {
    string text;
    size_t totalBits = bits.size();

    for (size_t i = 0; i + 8 <= totalBits; i += 8) {
        char c = 0;
        for (int j = 0; j < 8; ++j) {
            c = (c << 1) | bits[i + j];
        }
        text.push_back(c);
    }
    
    return text;
}

// встраивание текста в изображение
void embedTextInImage(const string& text, const string& imagePath) {
    vector<bool> textBits = encodeTextToBits(text);
    vector<bool> imageBits = readFileBits(imagePath);

    if (imageBits.size() < textBits.size()) {
        throw runtime_error("Изображение слишком маленькое для данного текста");
    }

    // младшие биты изображения в биты текста
    for (size_t i = 0; i < textBits.size(); ++i) {
        imageBits[i] = textBits[i];
    }

    writeFileBits(imagePath, imageBits);
}

// LSB-декодирование
string extractTextFromImage(const string& imagePath) {
    vector<bool> imageBits = readFileBits(imagePath);
    return decodeBitsToText(imageBits);
}

// вывод меню и получение выбора пользователя
int showMenu() {
    cout << "\n=== LSB-шифрование ===\n";
    cout << "1. Зашифровать текст в изображение\n";
    cout << "2. Расшифровать текст из изображения\n";
    cout << "0. Выход\n";
    cout << "Выберите действие: ";

    int choice;
    cin >> choice;
    cin.ignore(); // очищаем буфер ввода
    return choice;
}

int main() {
    try {
        while (true) {
            int choice = showMenu();

            switch (choice) {
                case 1: {
                    string text, imagePath;
                    cout << "Введите текст для шифрования: ";
                    getline(cin, text);
                    cout << "Путь к изображению: ";
                    getline(cin, imagePath);

                    embedTextInImage(text, imagePath);
                    cout << "Текст успешно зашифрован в изображение!\n\n";
                    break;
                }
                case 2: {
                    string imagePath;
                    cout << "Путь к изображению для расшифровки: ";
                    getline(cin, imagePath);

                    string decodedText = extractTextFromImage(imagePath);
                    cout << "Расшифрованный текст: " << decodedText << "\n\n";
                    break;
                }
                case 0:
                    cout << "До свидания!\n";
                    return 0;
                default:
                    cout << "Некорректный выбор. Попробуйте снова.\n\n";
            }
        }
    } catch (const exception& e) {
        cerr << "Ошибка: " << e.what() << endl;
        return 1;
    }

    return 0;
}
