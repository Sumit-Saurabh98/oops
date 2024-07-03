#include <iostream>
using namespace std;

class Base {
public:
    int publicVar; // Accessible from outside the class

protected:
    int protectedVar; // Accessible within the class and derived classes

private:
    int privateVar; // Accessible only within the class

public:
    Base() {
        publicVar = 1;
        protectedVar = 2;
        privateVar = 3;
    }

    void display() {
        cout << "Public Variable: " << publicVar << endl;
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Private Variable: " << privateVar << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Accessing from Derived Class:" << endl;
        cout << "Public Variable: " << publicVar << endl; // Accessible
        cout << "Protected Variable: " << protectedVar << endl; // Accessible
        // cout << "Private Variable: " << privateVar << endl; // Not accessible, will cause a compile error
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    cout << "Accessing from Base Class Object:" << endl;
    baseObj.display();

    cout << "Accessing from Derived Class Object:" << endl;
    derivedObj.show();

    cout << "Accessing from Main Function:" << endl;
    cout << "Public Variable: " << baseObj.publicVar << endl; // Accessible
    // cout << "Protected Variable: " << baseObj.protectedVar << endl; // Not accessible, will cause a compile error
    // cout << "Private Variable: " << baseObj.privateVar << endl; // Not accessible, will cause a compile error

    return 0;
}