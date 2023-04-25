// this is another way to write operator overloading. ie. by giving money of both of you to your friend.

#include <iostream>
using namespace std;

class complex
{
private:
    int real;
    int imaginary;

public:
    complex(int r = 0, int i = 0)
    { //constructor
        real = r;
        imaginary = i;
    }

    friend complex operator+(complex c1, complex c2); // we need to describe function body outside class in friend's operator overloading.      // write friend at beginning

    void display()
    {
        cout << real << " + i " << imaginary;
    }
};

complex operator+(complex c1, complex c2)
{ // we dont need to use scope resolution operator.
    complex temp;
    temp.real = c1.real + c2.real;                // we cannot access using    real + c2.real;   becuase this is outside class. it is global function and the data member of complex class is private.
    temp.imaginary = c1.imaginary + c2.imaginary;   // here, we are able to access private data member because we wrote friend inside class prototype.
    return temp;
}

int main()
{
    complex c1(2, 6);
    complex c2(3, 5);
    complex c3;
    c3 = c1 + c2; // here, + operator is used for user defined classes (complex class). this is called "operator overloading".
//  c3 = operator+ (c1,c2);   
    c3.display();
    return 0;
}