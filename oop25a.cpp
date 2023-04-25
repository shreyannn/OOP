#include <iostream>
using namespace std;

class base
{
public:
    void window() { cout << "this is window function" << endl; }
    void door() { cout << "this is door function" << endl; }
};

class derive : public base
{
public:
    void display() { cout << "this is display feature" << endl; }
    void ac() { cout << "this is ac function" << endl; }
};

int main()
{
    base *p;
    p = new derive(); //    p = new base(); // same thing :  pointer of base class So, it will search functions only within base function.
    //                                                                                      even though, it is pointing on derive class.
    // derive b;
    // p=&b;

    p->window();
    p->door();
    //! p->display();

    /*  derive *p;      not possible.
        p=new base();

        p->window();
        p->door();
    */
    //! p->display();

    return 0;
}