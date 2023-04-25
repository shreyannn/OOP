#include <iostream>
using namespace std;

class rectangle{
    private:
        int length;
        int breadth;
    public:                 
        void setLength(int l){     
            if(l>=0){
                length=l;
            }
            else{
                length=0;           
            }
        }
        void setBreadth(int b){
            if(b>=0){
                breadth=b;
            }
            else{
                breadth=0;
            }
        }
        int getLength(){
            return length;
        }
        int getBreadth(){
            return breadth;
        }

        int area(){
            return length * breadth;   
        }
};

int main(){
    rectangle r1;                // this is philosophically incorrect.
    r1.setLength(10);            //    "         "             "
    r1.setBreadth(5);            //    "         "             "
    return 0;
}     


/* 

 rectangle r1;   while declaring the r1 object, it will have some garbage value beforing we set its value.
                 which is philosophically incorrect. It must have some pre-specified value before setting it using funciton. 
                 thus, we will declaring using constructor.
                 ie.   rectangle r1(5,10);   
                 this is parametarized construction, we need to create funciton inside class aswell. see in next program

                 eg. while ordering a car, it will be delivered to us at specified color not with garbage/undefined color.

*/