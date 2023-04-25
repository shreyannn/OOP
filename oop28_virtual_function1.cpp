#include <iostream>
using namespace std;

class base
{
public:
    void display() { cout << "display funciton" << endl; }
};

class derive : public base
{
public:
    void display() { cout << "another display function" << endl; }
};

int main()
{
    base *p = new derive(); //    base class is pointing on derive class object

    p->display(); //*  the function of the base class will be called which is philosophically incorrect.
    //*                 to call the function derive class we will use virtual function.

    return 0;
}