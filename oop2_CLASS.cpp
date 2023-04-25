#include <iostream>
using namespace std;

class rectangle{
    public:
        int length;
        int breadth;

        int area(){
            return length * breadth;     // we wont need to declare length and breadth inside the function.
        }
        int perimeter(){
            return 2*(length + breadth);
        }
};

int main(){
    rectangle r1,r2;        /* declaring objects       • Object consumes memory equal to sum of sizes of all data members.   
                          • Member functions don’t occupy memory   So, here object r1 will consume 8 bit data. ie. 4 bit for each data member ie. length and breadth
                             data member will be stored in stack memory */   

    
    r1.length= 10;                        // accessing the class memebers (it must be declared public: to access)    • . Dot operator is used for accessing members of object
    r1.breadth=5;
    r2.length=2;
    r2.breadth=3;
    cout<<r1.area()<<endl;                 //  • Member functions are called depending on object    member function are stored in code memory.
    cout<<r2.area();
    
    return 0;
}