/*
 In C++, we can make operators to work for user defined classes. This means C++ has the ability
 to provide the operators with a special meaning for a data type, this ability is known as operator overloading. 
 For example, we can overload an operator ‘+’ in a class like String so that we can concatenate two strings by just using +. 
 Other example classes where arithmetic operators may be overloaded are Complex Number, Fractional Number, Big Integer, etc.  

 by giving money to one of both classes to ADD.
  */

#include <iostream>                   
using namespace std;

class complex{
    private:
        int real;
        int imaginary;
    public:
        complex(int r=0, int i=0){               //constructor
            real=r;
            imaginary=i;
        }

        complex operator+ (complex c2){                 //function        using  operator+  as function name.
            complex temp;                         

            temp.real = real + c2.real;                         
            temp.imaginary = imaginary + c2.imaginary;
            return temp;
        }
        void display(){
            cout<<real<<" + i "<<imaginary;
        }
         
};
int main(){
    complex c1(2,5);                         
    complex c2(3,6);
    complex c3;
    c3=c1 + c2;                   // here, + operator is used for user defined classes (complex class). this is called "operator overloading".              

    c3.display();              
    return 0;
}

// using member function 
// next program, using friend function