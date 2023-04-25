#include <iostream>
using namespace std;

int area(int length, int breadth)
{
    int c = length * breadth;
    length = 10; //  Changes made to the passed variable do not affect the actual value.
    return c;
}

int main()
{
    int length = 5, breadth = 3;
    cout << "area is : " << area(length, breadth) << endl;
    cout << length; // value of length id still
    return 0;
}