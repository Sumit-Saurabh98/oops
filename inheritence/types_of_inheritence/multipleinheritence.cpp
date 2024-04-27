#include <iostream>
using namespace std;

class Parent1{

    public:
    Parent1(){
        cout << "Parent 1 called" << endl;
    };
};

class Parent2{

    public:
    Parent2(){
        cout << "Parent 2called" << endl;
    };
};

class Child : public Parent1, public Parent2{

    public:
    Child(){
        cout << "Child called" << endl;
    };
};

int main(){

    Child obj; // first parent constructor is called then child constructor then grandchild


    return 0;
};