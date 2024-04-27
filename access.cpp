#include <iostream>
using namespace std;

/*
Access modifiers and Modes of Inheritence
1) public
2) private
3) protected
*/
class Parent{
    
    public:
    int x;

    protected:
    int y;

    private:
    int z;
};

class Child1: public Parent{

    // x will  be remain public
    // y will be remain protected
    // z will not be accessable
    
}

class Child2: private Parent{

    // x will be private
    // y will be private
    // z will not be accessable

}

class Child3: protected Parent{

    // x will be protected
    // y will be protected
    // z will not be accessable
}

int main(){

    Parent obj;
    // we can use x here because it is public but we can not use y and z because they are protected and private simultaneously
    obj.x = 10;
    cout << obj.x << endl;

    return 0;
};