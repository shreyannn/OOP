#include <iostream> // // return a
using namespace std;

int min(int a, int b)
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
    cout << "area is : " << min(5, 3);
    return 0;
}