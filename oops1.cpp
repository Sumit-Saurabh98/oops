
#include <iostream>
using namespace std;


// class class_name{

//     public:
//     int a;
//     int b;
//     int c;
// }

class Fruit{

    public:
    string name;
    string color;
    int price;
    int weight;
};


int main(){

// way 1
    Fruit apple; // object of class Fruit

    apple.name = "Apple";
    apple.color = "Red";
    apple.price = 100;
    apple.weight = 200;

    cout << apple.name << " " << apple.color << " " << apple.price << " " << apple.weight << endl;

    // way 2

    Fruit *banana = new Fruit();

    banana->name = "Banana";
    banana->color = "Yellow";
    banana->price = 200;
    banana->weight = 300;

    cout << banana->name << " " << banana->color << " " << banana->price << " " << banana->weight << endl;
   
    return 0;
};
