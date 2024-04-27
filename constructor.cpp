#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int breadth;

    Rectangle() { // default constructor
        length = 10;
        breadth = 20;
    }

    Rectangle(int x, int y) { // parameterized constructor
        length = x;
        breadth = y;
    }

    Rectangle(Rectangle& r) { // copy constructor
        length = r.length;
        breadth = r.breadth;
    }

    ~Rectangle() {
        cout << "Destructor is called" << endl;
    }
};

int main() {
    Rectangle *r1 = new Rectangle(); // Creating an object using the default constructor
    cout << r1->length << " " << r1->breadth << endl;
    delete r1;

    Rectangle r2(100, 200); // Creating an object using the parameterized constructor
    cout << r2.length << " " << r2.breadth << endl;

    Rectangle r3(r2); // Creating an object using the copy constructor
    cout << r3.length << " " << r3.breadth << endl;
    return 0;
}