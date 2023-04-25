#include <iostream>
using namespace std;

class complex
{
private:
    int real;
    int imaginary;

public:
    complex(int r = 0, int i = 0)
    { 
        real = r;
        imaginary = i;
    }

    void display()
    {
        cout << real << " + i " << imaginary;
    }
};

int main()
{
    complex c1(5,4);   
    c1.display();           //   we will overload << insertion operator in complex no. class.                          
    return 0;                //   such that we can print object of class directly. ie.  cout<<c1;
}