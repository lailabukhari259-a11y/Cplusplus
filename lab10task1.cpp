#include <iostream>
using namespace std;

class Rectangle {
    int length, width;   

public:
    
    Rectangle(int l, int w) {
        length = l;
        width  = w;
    }

    
    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r(4, 5);   
    cout << "Area = " << r.area();
    return 0;
}

