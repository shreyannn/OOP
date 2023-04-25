
#include <iostream>        // types of function inside class.  you should mention all the functions to make a perfect class whether you need them or not..
using namespace std;

class Rectangle{

 private:
    int length;              // data members
    int breadth;

 public:

    Rectangle();                    // unparametarize constructor           we can also write only prototype of the function inside class. we can elaborate the funciton outside the class using scope resolution operator. ie. ::
    Rectangle(int l,int b);                 // parametarize
    Rectangle(Rectangle &r);                         // copy

    void setLength(int l);                   // mutator function
    void setBreadth(int b);
  
    int getLength(){return length;}            // accessor function               // in-line function (Finishes in one line)
    int getBreadth(){return breadth;}

    int area();                                // facilitator function
    int perimeter();

//   int  isSquare();                     // enquiry function
    bool isSquare();

    ~Rectangle();                      // destructor function

};   

/*

All types of Member Functions

• Constructors - called when object is created
• Accessors - used for knowing the value of data members
• Mutators - used for changing value of data member
• Facilitator - actual functions of class
• Enquiry - used for checking if an object satisfies some condition
• Destructor - used for releasing resources used by object

*/