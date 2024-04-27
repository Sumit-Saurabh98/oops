/*
Function overloading in simple terms means having multiple functions in a program with the 
same name but different parameters. This allows you to use the same function name for different operations based on the 
type or number of parameters passed to it.
*/

#include <iostream>
using namespace std;

class Area{

    public:
    void area(int a){
        int area = a*a;
        cout << "Area of square is " << area << endl;
    };

    void area(float a){
        float area = 3.14*a*a;
        cout << "Area of circle is " << area << endl;
    };

    void area(int a, int b){
        int area = a*b;
        cout << "Area of rectangle is " << area << endl;
    }
};


int main(){

    Area a;

    a.area(5);
    a.area(float(3.5));
    a.area(2, 4);

    return 0;
}