/*  Base class can be
     1) Concrete
     2) Abstract with some concrete and some pure virtual functions
     3) Abstract with All virtual functions     ->   Interface
*/

/*  Use of inheritance
     1) reusibility
     2) to obtain run time polymorphism
*/

#include <iostream>
using namespace std;

class car // abstract class with some concrete and some pure virtual functions.
{
public:
    virtual void start() = 0;               //* too obtain run time polymorphism.
    void stop() { cout << "stop the car"; } //* to reuse the same code in different class.
};

class innova : public car //*  concrete class
{
public:
    void start() { cout << "Innova Started" << endl; }
};

int main()
{
    car *p = new innova();
    p->start();

    innova c;
    c.stop();
    return 0;
}