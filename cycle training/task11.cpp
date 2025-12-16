#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    double total_height = 0.0;
    int stamina = 1000;
    bool reached_top = true;
    int failed_level = 0;
    double height_before_fail = 0.0;
    
    for (int i = 1; i <= n; i++) {
        double height;
        int difficulty;
        cin >> height >> difficulty;
        
        if (difficulty == 10) {
            cout << "Уровень " << i << " слишком сложный. Пропускаем." << endl;
            continue;
        }
        
        int stamina_loss = difficulty * 10;
        
        if (stamina - stamina_loss >= 0) {
            stamina -= stamina_loss;
            total_height += height;
        } else {
            reached_top = false;
            failed_level = i;
            height_before_fail = total_height;
            break;
        }
    }

    cout << fixed << setprecision(2);
    
    if (reached_top) {
        cout << "Поздравляем! Вы достигли вершины!" << endl;
        cout << "Общая высота: " << total_height << " м" << endl;
        cout << "Остаток выносливости: " << stamina << " единиц" << endl;
    } else {
        cout << "Восхождение прервано на уровне " << failed_level << "." << endl;
        cout << "Пройдено высоты: " << height_before_fail << " м" << endl;
    }
    
    return 0;
}