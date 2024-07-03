#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

class Rectangle {
private: 
    float length;
    float width;

public:
    void setValue(float length, float width) {
        this->length = length;
        this->width = width;
    }

    float RectArea();
    float RectPeri();
};

float Rectangle::RectArea() {
    return length * width;
}

float Rectangle::RectPeri() {
    return 2 * (length + width);
}

int main() {
    float length = 5, width = 3;
    // cin >> length >> width;

    Rectangle r;
    r.setValue(length, width);

    cout << fixed << setprecision(1);
    cout << r.RectArea() << endl;
    cout << r.RectPeri() << endl;

    return 0;
}