#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number to print its multiplication table: ";
    cin >> number;

    cout << "\nMultiplication Table of " << number << ":\n";

    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}

