#include <iostream>
using namespace std;
struct Laptop {
    string brand;
    int ram;
    float price;
};
int main() {
    Laptop L;
    cout << "Enter laptop brand: ";
    getline(cin, L.brand);

    cout << "Enter RAM (in GB): ";
    cin >> L.ram;
    cout << "Enter price: ";
    cin >> L.price;
    cout << "\n--- Laptop Specifications ---\n";
    cout << "Brand: " << L.brand << endl;
    cout << "RAM: " << L.ram << " GB" << endl;
    cout << "Price: " << L.price << endl;

    return 0;
}

