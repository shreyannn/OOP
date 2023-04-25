#include <iostream> // return &a
using namespace std;

int &min(int &a, int &b)
{ // return type
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a = 5, b = 3;
    cout << "area is : " << min(a, b);
    return 0;
}