#include <iostream>
using namespace std;

class base
{
public:
    void display() { cout << "this is display function" << endl; }
    void hell() { cout << "hello" << endl; }
};

class derive : public base
{
public:
    void display(int a) { cout << "this is another display function with " << a << endl; }
};

int main()
{
    base b1;
    derive d1;
    d1.hell();
    d1.display(1);
    return 0;
}

//* there is slight variation in prototype of functions in function overloading