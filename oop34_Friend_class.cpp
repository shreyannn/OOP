#include <iostream>
using namespace std;

class base
{
private:
    int a = 10;
    int b = 20;

public:
    friend class derive;
};

class derive
{
public:
    int area(base b1) { return b1.a * b1.b; } // acessing private member of base class. since, derive class is friend of base class.
    //   but , base class is not a friend of derive class which means we cannot access private member of derive class inside base class.
};

int main()
{
    base b1;
    derive d1;
    cout << "area is : " << d1.area(b1);

    return 0;
}