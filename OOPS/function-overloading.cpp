#include <iostream>
using namespace std;

/*
Function overloading allows multiple functions with the same name to exist, 
differentiated by their parameter types or number of parameters. 
Operator overloading allows you to define custom behavior for 
operators (like +, -, etc.) for user-defined types.
*/

class Example {
public:
    void display(int i) {
        cout << "Integer: " << i << endl;
    }

    void display(double d) {
        cout << "Double: " << d << endl;
    }

    void display(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Example ex;
    ex.display(5);       // Calls display(int)
    ex.display(3.14);    // Calls display(double)
    ex.display("Hello"); // Calls display(string)
    return 0;
}