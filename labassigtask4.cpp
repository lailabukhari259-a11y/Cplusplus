#include <iostream>
using namespace std;
bool isArmstrong(int num) {
    int original = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num = num / 10;}
    return (sum == original);}
int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong Number." << endl;
    } else {
        cout << number << " is NOT an Armstrong Number." << endl;
    }
    return 0;
}

