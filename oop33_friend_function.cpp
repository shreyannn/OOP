/*
Friend functions and classes
• Friend functions are global functions
• They can access member of a class upon their objects
• A class can be declared as friend on another class
• All the functions of friend class can access private and protected members of other class
*/

#include <iostream>
using namespace std;

class base
{
private:
    int a = 10;

protected:
    int b = 20;

public:
    int c = 30;
    friend void numbe(base b1);
};

void numbe(base b1)
{
    // base b1; //*      HAS A
    cout << b1.a;
    cout << b1.b;
    cout << b1.c;
}
int main()
{
    base b1;
    numbe(b1);
    return 0;
}