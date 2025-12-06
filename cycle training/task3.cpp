#include <iostream>
#include <string>

using namespace std;
/*
fixation vs remove
height % 10
height /= 10;
*/
int main() {
    long long number, max, min, num_to_check;
    cin >> number;
    num_to_check = number % 10;
    max = num_to_check;
    min = num_to_check;
    while (number > 0) {
        num_to_check = number % 10;
        if (num_to_check > max) max = num_to_check;
        if (num_to_check < min) min = num_to_check;
        number /= 10;
    }
    cout << "Максимальная цифра равна " << max << endl;
    cout << "Минимальная цифра равна " << min << endl;
    return 0;
}