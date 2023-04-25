/*
Abstract class
• Class having pure virtual function is a abstract class
• Abstract class can have concrete also.
• Object of abstract class cannot be created
• Derived class can must override pure virtual function, otherwise it will also become a abstract class.
• Pointer of abstract class can be created
• Pointer of abstract class can hold object of derived class
• Abstract classes are used for achieving polymorphism
*/

#include <iostream>
using namespace std;

class car //*    abtract class - 1)  we cannot create object of abtract class.  2) but we can have its refernece pointer.
{
public:
    virtual void start() = 0;
};

class innova : public car
{
public:
    void start() { cout << "Innova Started" << endl; }
};

int main()
{
    car *p = new innova();
    p->start();
    return 0;
}