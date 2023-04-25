#include <iostream>
using namespace std;

class base
{
public:
    void display() { cout << "this is display function" << endl; }
};

class derive : public base
{
public:
    void display() { cout << "this is another display function" << endl; } // WITH comment, it will call above function.  WITHOUT comment, this function will be called.
};

int main()
{
    base b1;
    derive d1;
    b1.display();
    d1.display(); // function calling
    return 0;
}