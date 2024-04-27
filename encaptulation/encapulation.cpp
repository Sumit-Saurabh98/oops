#include <iostream>
using namespace std;

/* encapulation:- In object-oriented programming, encapsulation is the practice of bundling data and the methods that 
operate on that data into a single unit, called a class. This allows the class to control access to its internal data, 
making it difficult for external code to modify or access the data directly
*/

class ABC{

    int x;

    public:

    void set(int a){

        x = a;
    }

    int get(){

        return x;
    }
};

int main(){


    ABC obj;

    // we can not directly access the private member of the class, we have to use method to manuipulate it
    
    obj.set(4);

    cout << obj.get() << endl;

    return 0;
}