#include <iostream>
using namespace std;

int area(int *length, int *breadth)
{
    return (*length) * (*breadth);
}

int main()
{
    int a = 5, b = 4;
    cout << "area is : " << area(&a, &b);
    return 0;
}