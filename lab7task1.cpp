#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    swap(&x, &y);

    cout << "\nAfter swapping:" << endl;
    cout << "x = " << x << ", y = " << y;
    return 0;
}

