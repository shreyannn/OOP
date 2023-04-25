#include <iostream>
using namespace std;

class rectangle{
    public:                     // we wont use public: because there are chances that data can be mishandle by the programmer and the class will be equally blamed for it.
        int length;
        int breadth;

        int area(){
            return length * breadth;   
        }
};

int main(){
    rectangle r1;        
    
    r1.length= 10;                      
    r1.breadth=-5;
    cout<<r1.area()<<endl;                // area is never negative. here, the data has been mishandled. so, it gave wrong answer. breadth cannot be negative. check next program
    
    return 0;
}