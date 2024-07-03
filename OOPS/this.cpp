#include <iostream>
using namespace std;

class Base{
    private:

    int a;
    int b;
    int c;

public:
    void setVal(int a, int b, int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }

    void display(){
        cout << a << " " << b << " " << c << endl;
    }


};



int main(){

    Base b1;
    b1.setVal(1, 2, 3);
    b1.display();

    return 0;
}