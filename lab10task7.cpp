#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }
    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r1(4, 5);   
    Rectangle r2(6, 3);   

    int area1 = r1.area();
    int area2 = r2.area();

    cout << "Area of Rectangle 1 = " << area1 << endl;
    cout << "Area of Rectangle 2 = " << area2 << endl;

    if (area1 > area2) {
        cout << "Rectangle 1 has a bigger area.";
    }
    else if (area2 > area1) {
        cout << "Rectangle 2 has a bigger area.";
    }
    else {
        cout << "Both rectangles have the SAME area.";
    }

    return 0;
}

