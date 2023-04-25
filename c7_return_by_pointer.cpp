#include <iostream> // return *a
using namespace std;

int *min(int *a, int *b)
{ // return type
    if (*a < *b)
    {             // *a is value at address
        return a; // a is address
    }
    else
    {
        return b;
    }
}

int main()
{
    int a = 5, b = 4;
    int *c = min(&a, &b);
    cout << "area is : " << *c;
    return 0;
}