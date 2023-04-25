
// operator overloading ->    there are many operator in c++. some of them are -:   +  ,  -  ,  /  , * , etc.
//                           we can use only use certain built-in datatypes with these operators.
//                         for eg -: we can add( + ) int or float datatype only.

//           suppose we want to use it (+ operator) with user defined classes, we will be using operator overloading.

/*
Operator overloading
• Operators can be overloaded on our classes
• We can define operator for our own classes
• Operators can be overloaded using member functions or friend functions
• Global functions can also access private and protected members of an object if they are
declared as friend inside a class                                                                  */

#include <iostream> // adding ( + ) two numbers of our custom data type.
using namespace std;

class complex
{
private:
    int real;
    int imaginary;

public:
    complex(int r = 0, int i = 0)
    { // constructor
        real = r;
        imaginary = i;
    }

    complex add(complex c2)
    {                 // function
        complex temp; // here, temp is temporary class which exist only inside this function block.

        temp.real = real + c2.real; // here, real is data member of c1 class.   whereas, c2.real was passed as a parameter of the function.
        temp.imaginary = imaginary + c2.imaginary;
        return temp;
    }
    void display()
    {
        cout << real << " + i " << imaginary;
    }
};
int main()
{
    complex c1(2, 5); // c1 is object of complex class.
    complex c2(3, 6);
    complex c3;
    c3 = c1.add(c2); // function of class c1 is being called.

    c3.display(); // function of class c3 is being called.
    return 0;
}

// see next program to understand "operator overloading"