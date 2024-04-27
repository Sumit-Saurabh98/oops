// multiple class drived from single class

#include <iostream>
using namespace std;

class Parent{

    public:
    Parent(){
        cout << "Parent called" << endl;
    };
};

class Child1: public Parent{

    public:
    Child1(){
        cout << "Child 1 called" << endl;
    };
};

class Child2: public Parent{

    public:
    Child2(){
        cout << "Child 2 called" << endl;
    };
};

int main(){

    return 0;
}