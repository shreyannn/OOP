#include <iostream>
using namespace std;

class rectangle{
    private: 
        int length;
        int breadth;
    public:
        rectangle (int l=0,int b=0){                 // general constructor.
            setLength(l);
            setBreadth(b);
        }

        rectangle (rectangle &rect){                 // deep copy constructor.
            length=rect.length;
            breadth=rect.breadth;
        }

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
        int area(){
            return length*breadth;
        }
    
};

int main (){
    rectangle r(2,5);
    rectangle r2(r);       // deep copy constructor  // we pass object as parameter.

    cout<<r2.area();          
    return 0;
}