// dereferencing operator      ->       also, called arrow operator
#include <iostream>
using namespace std;

class rectangle {
    public:             
    int length;
    int breadth;

    int area(){
        return length*breadth;
    }
};

int main(){
    rectangle r;     // declaring object
    rectangle *p;    // declaring pointer which can store the address of class rectangle
    p=&r;

    r.length =10;      // dot operator is used for accessing the member of an object using variable name
    p->breadth =5;     // arrow operator is used for accessing the member of an object using pointer of an object 
    cout<<r.area()<<endl;
    cout<<p->area();

    return 0;
}