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


int main(){

    Child obj; // first parent constructor is called then child constructor 


    return 0;
};