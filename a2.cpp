#include <iostream>
using namespace std;

class a
{
public:
    a()
    {
        cout << "hello a" << endl;
    }
};

class b : public a
{
public:
    b()
    {
        cout << "hello b" << endl;
    }
};

class c : public b
{
public:
    c()
    {
        cout << "hello c" << endl;
    }
};

int main()
{
    c x;

    return 0;
}