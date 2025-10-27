#include <iostream>
using namespace std;
int main() {
    int arr[10], value, found = 0;
    cout << "Enter 10 numbers: ";
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];}
    cout << "Enter value to search: ";
    cin >> value;
    for(int i = 0; i < 10; i++) {
        if(arr[i] == value) {
            cout << "Value found at index " << i << endl;
            found = 1;
            break;
        }}
    if(found == 0) {
        cout << "Value not found in the array." << endl;
    }
    return 0;
}

