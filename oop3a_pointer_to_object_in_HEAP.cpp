#include <iostream>
using namespace std;

class rectangle
{
public:
    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }
};

int main()
{
    // rectangle r;                         // creating object in STACK
    rectangle *p = new rectangle(); // creating object in HEAP               new rectangle() is a dynamic object and () can be avoided as well

    p->length = 5;
    p->breadth = 5;
    cout << p->area();

    return 0;
}