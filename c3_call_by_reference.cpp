#include <iostream> //A reference variable is an alias, that is, another name for an already existing variable.
//                            Once a reference is initialized with a variable,
//                                  either the variable name or the reference name may be used to refer to the variable.
using namespace std;

int area(int &length, int &breadth)
{
    int c = length * breadth;
    length = 10; //  Changes made to the passed variable do not affect the actual value.
    return c;
}

int main()
{
    int length = 5, breadth = 3;
    cout << "area is : " << area(length, breadth) << endl;
    cout << length; // value of length will be change from function. since, address of the memory is passed to the function
    return 0;
}