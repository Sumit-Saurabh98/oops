#include <iostream>
using namespace std;

class Parent{

    public:
    Parent(){
        cout << "Parent called" << endl;
    };
};

class Child : public Parent{

    public:
    Child(){
        cout << "Child called" << endl;
    };
};

class GrandChild: public Child{

    public:
    GrandChild(){
        cout << "GrandChild called" << endl;
    };
};

int main(){

    GrandChild obj; // first parent constructor is called then child constructor then grandchild


    return 0;
};