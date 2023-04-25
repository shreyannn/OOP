#include <iostream>
using namespace std;

class base
{
public:
    virtual void display() { cout << "display funciton" << endl; }
};

class derive : public base
{
public:
    void display() { cout << "another display function" << endl; }
};

int main()
{
    base *p = new derive(); //    base class is pointing on derive class object

    p->display(); //* with the help of virtual function, programmar will have more control over the code.

    return 0;
}