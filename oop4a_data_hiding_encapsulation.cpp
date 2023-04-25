#include <iostream>
using namespace std;

class rectangle{
    private:
        int length;
        int breadth;
    public:                 
        void setLength(int l){      // here we gave limitation and less functionality to the user.
            if(l>=0){
                length=l;
            }
            else{
                length=0;           // we stated that length is never negative. And, we gave a general value ie.0 
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
    rectangle r1;        

    //r1.length= 10;     we cannot access data member since it is in private.    we need call funciton which is public
    r1.setLength(10);
    r1.setBreadth(-5);
                         
    cout<<"the length is "<<r1.getLength()<<endl;
    cout<<"the breadth is "<<r1.getBreadth()<<endl;            

    cout<<"area is "<<r1.area();    
    return 0;
}



/* In this program, length and breadth are property.
   
   setLength , setBreadth is known as mutator.                   write
   getLength , getBreadth is known as accessor.                  read

   these are property function  */

