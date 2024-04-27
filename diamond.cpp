// diamond proplem;

#include <iostream>
using namespace std;


class Parent{

    public:
    Parent(){
        cout << "Parent called" << endl;
    };
};

class Child1 : Parent{

    public:
    Child1(){
        cout << "Child 1 called" << endl;
    };
};


class Child2 : Parent{

    public:
    Child2(){
        cout << "Child 2 called" << endl;
    };
};

class GrandChild : public Child1, public Child2{

    public:
    GrandChild(){
        cout << "GrandChild called" << endl;
    };
};

int main(){

    GrandChild obj;

    return 0;
}