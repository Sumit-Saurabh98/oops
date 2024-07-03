#include <iostream>
using namespace std;

class Car{
    public:
        void start(){
            cout<< "Car is starting" << endl;
        }
};

int main(){
    Car BMW;
    BMW.start();

    return 0;
}