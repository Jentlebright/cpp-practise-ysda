#include <iostream>
#include <string>

using namespace std;

int main() {
    string number;
    cin >> number;
    
    int count_3 = 0;
    int count_last = 0;
    int even_count = 0;
    int sum_gt_5 = 0;
    long long product_gt_7 = 1;
    bool has_gt_7 = false;
    int count_0_5 = 0;
    
    char last_digit = number.back();
    
    for (char digit_char : number) {
        int digit = digit_char - '0';
        if (digit == 3) {
            count_3++;
        }
        if (digit_char == last_digit) {
            count_last++;
        }
        if (digit % 2 == 0) {
            even_count++;
        }
        if (digit > 5) {
            sum_gt_5 += digit;
        }
        if (digit > 7) {
            product_gt_7 *= digit;
            has_gt_7 = true;
        }
        if (digit == 0 || digit == 5) {
            count_0_5++;
        }
    }
    if (!has_gt_7) {
        product_gt_7 = 1;
    }
    cout << count_3 << endl;
    cout << count_last << endl;
    cout << even_count << endl;
    cout << sum_gt_5 << endl;
    cout << product_gt_7 << endl;
    cout << count_0_5 << endl;
    return 0;
}