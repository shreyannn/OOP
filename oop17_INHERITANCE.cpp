// The capability of a class to derive properties and characteristics from another class is called Inheritance. 
// Inheritance is one of the most important feature of Object Oriented Programming.

#include <iostream>
using namespace std;

class rectangle{
    public:
    int length;
    int breadth;
    void display(){
        cout<<length<<" "<<breadth<<endl;
    }
};

class cube :public rectangle{       // this is inheritance.      cube class is inheriting : from rectangle class    or   cube is extending from rectangle.
    public:    
    int height;
};

int main(){
    class cube c1;           // though c1 is object of class cube, it has also acquire the property of class rectangle.                 here, c1 object contains its own member height,  length and breadth and display function.
    c1.length=5,c1.breadth=6,c1.height=7;       // they are all public            

    cout<<c1.length<<endl<<c1.breadth<<endl<<c1.height<<endl;
    c1.display();
    
    return 0;
}