/*
Polymorphism
• Same name different actions
• Runtime Polymorphism is achieved using function overriding
• Virtual functions are abstract functions of base class(imaginary function)
• Derived class must override virtual function
• Base class pointer pointing to derived class object and a override function is called

*/

#include <iostream>
using namespace std;

class car
{
public:
    virtual void start() { cout << " car started"; } //* virtual functions are imaginary function.   this is a function of generalization class which do not exist in real. it is just an concept/idea.
    virtual void stop() { cout << " car stoped"; }
};

class innova : public car
{
public:
    void start() { cout << "Innova Started" << endl; }
    void stop() { cout << " Innova stoped"; }
};

class swift : public car
{
public:
    void start() { cout << "Swift Started" << endl; }
    void stop() { cout << " swift stoped"; }
};
int main()
{
    car *p = new innova();
    p->start(); //* same
    p = new swift();
    p->start(); //* same       this is called polymorphism  ( Same name different actions )
    return 0;
}