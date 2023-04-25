#include <iostream>
using namespace std;

class car //*    abtract class  - since it has pure virtual function.
{
public:
    virtual void start() = 0; //* Now, this is pure virtual function
    virtual void stop() = 0;  //* We donnot need the body of virtual function since it doesnot exist and is not used.

    //* pure virtual function FORCES sub classes to implement/override the virtual function.
    //* the pure virtul function must be override
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