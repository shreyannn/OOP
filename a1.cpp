#include <iostream> // operator overloading
using namespace std;

class distances
{
private:
    int feet, inch;

public:
    distances(int f = 0, int i = 0)
    {
        set(f, i);
    }
    void set(int f, int i)
    {
        feet = f;
        inch = i;
    }

    distances operator+(distances b)
    {
        distances d;
        d.feet = feet + b.feet;
        d.inch = inch + b.inch;
        d.feet = d.feet + d.inch / 12;
        d.inch = d.inch % 12;
        return d;
    }
    void get()
    {
        cout << "feet : " << feet << endl;
        cout << "inch : " << inch << endl;
    }
};

int main()
{
    distances a(5, 4), b(5, 5), c(0, 0);
    c = a + b; // b as a parameter pass hunxa
    c.get();

    return 0;
}