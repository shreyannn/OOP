/* there are four types of constructors. they are:-

1) default constructor        -> also, known as built-in constructor.
2) parametarizee construction]\
3) unparametarize construction
4) copy constructor     */

#include <iostream>
using namespace std; 

class rectangle{                   // 1) default contructor is created itself by compiler.
    private:
        int length;
        int breadth;
    public:      

        rectangle(){                    // 2) unparametarize contructor        CONSTRUCTOR will have the class name such that it will be treated as a constructor by compiler, with no reuturn value.
            length=1;
            breadth=1;
        }  

        // rectangle(int l, int b){         // 3) parametarize constructor.  
        //     setLength(l);
        //     setBreadth(b);
        // }        

        // rectangle(rectangle &rect){         // 4) copy constructor. this is taken by refernece not by value because while calling the constructor, new rectangle should not be created.
        //     length=rect.length;
        //     breadth=rect.breadth;
        // }

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
            return length;                  // in-line function
        }
        int getBreadth(){
            return breadth;
        }

        int area(){
            return length * breadth;   
        }
};

int main(){
    // rectangle r;          // here, r is contructed. what contructed it? It is built-in function which is contructed by the compiler by converting it into machine level language. So, it is known as 1) default constructor.

    rectangle r;          // 2) unparametarized constructor

    // rectangle r(5,5);      // 3) parametarized constructor
    
    cout<<"length is  : "<<r.getLength()<<endl;
    cout<<"breadth is  : "<<r.getBreadth()<<endl;
    cout<<"area is  : "<<r.area();

    // rectangle r2(r)      // 4) copy constructor
    
    return 0;
}     


 
