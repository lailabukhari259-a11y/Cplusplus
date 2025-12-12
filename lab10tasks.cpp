#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

public:
    
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Area method
    int area() {
        return length * width;
    }

    // Task 2: Perimeter method
    int perimeter() {
        return 2 * (length + width);
    }

    // Task 5: Display function
    void display() {
        cout << "Length = " << length << ", Width = " << width << endl;
    }
};

int main() {
    // -------------------------------
    // Task 3: Create three objects
    // -------------------------------
    Rectangle r1(4, 5);
    Rectangle r2(6, 7);
    Rectangle r3(10, 3);

    cout << "Object 1:\n";
    r1.display();
    cout << "Area = " << r1.area() << endl;
    cout << "Perimeter = " << r1.perimeter() << "\n\n";

    cout << "Object 2:\n";
    r2.display();
    cout << "Area = " << r2.area() << endl;
    cout << "Perimeter = " << r2.perimeter() << "\n\n";

    cout << "Object 3:\n";
    r3.display();
    cout << "Area = " << r3.area() << endl;
    cout << "Perimeter = " << r3.perimeter() << "\n\n";


    // ----------------------------------
    // Task 4: User input rectangle
    // ----------------------------------
    int L, W;
    cout << "Enter Length: ";
    cin >> L;
    cout << "Enter Width: ";
    cin >> W;

    Rectangle userRect(L, W);

    cout << "\nUser Rectangle:\n";
    userRect.display();
    cout << "Area = " << userRect.area() << endl;
    cout << "Perimeter = " << userRect.perimeter() << endl;


    // ----------------------------------
    // Task 6: Square class and object
    // ----------------------------------
    class Square {
        int side;
    public:
        Square(int s) {
            side = s;
        }

        int area() {
            return side * side;
        }
    };

    Square s1(6);
    cout << "\nSquare Area = " << s1.area() << endl;

    return 0;
}

