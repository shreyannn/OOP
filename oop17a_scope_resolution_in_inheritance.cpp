#include <iostream>
using namespace std;

class base
{
public:
    void print()
    {
        cout << "hello base" << endl;
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << "hello derive" << endl;
    };
};

int main()
{
    derived d;
    d.print();
    d.base::print(); //    adding base:: between above function. using scope resolution when both functions have same name
    return 0;
}