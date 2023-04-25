/*
Base class Pointer pointing to derived class object
• Base class pointer can point on derived class object
• But only those functions which are in base class, can be called

• If derived class is having overrides functions they will not be called unless base class functions are declared as virtual
• Derived class pointer cannot point on base class object
*/

#include <iostream>
using namespace std;

class base
{
public:
    void display() { cout << "display function" << endl; }
    void show() { cout << "show function"; }
};

class derive : public base
{
public:
    void slow() { cout << "slow function" << endl; }
    void fast() { cout << "fast function" << endl; }
};

int main()
{
    base *p; // pointer declaration, class ko address store garxa
             //                       base class ko pointer initialize garnu parxa such that derive class ma point garna milxa.
             //                                             (Derive class ko pointer initilized garera, base class ma point garna mildeina)

    // derive b;
    // p = &b;
    p = new derive();

    p->display(); // pointing at derive class
    p->show();

    // p->slow();  //! this wont work, only the functions of base class can be called.
    return 0;
}