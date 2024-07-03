#include <iostream>
using namespace std;

class Rectangle{

    public:

    double width;
    double height;

    double RectangleArea(){

        return width * height;
    }
};


int main(){

    Rectangle rect1;

    rect1.width = 10.5;
    rect1.height = 5.5;

    cout << rect1.RectangleArea() << endl;


    return 0;
}