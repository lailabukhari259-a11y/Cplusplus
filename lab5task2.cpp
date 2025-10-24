#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 55, 23, 89, 4};

    int max = numbers[0];
    int min = numbers[0];

    for(int i = 1; i < 5; i++) {
        if(numbers[i] > max) {
            max = numbers[i];
        }
        if(numbers[i] < min) {
            min = numbers[i];
        }
    }

    cout << "Maximum value: " << max << endl;
    cout << "Minimum value: " << min << endl;

    return 0;
}

