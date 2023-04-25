#include <iostream>  
using namespace std; 

class rectangle{
    private:
        int length;
        int breadth;
    public:      

        //      rectangle(){                  
        //          length=0;
        //          breadth=0;
        //      }  

        rectangle(int l=0, int b=0){         // 3) parametarize constructor.  WHEN WE initilize value as 0 inside it. it can work as unparametarize constructor as well.
            setLength(l);
            setBreadth(b);
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
    rectangle r;    // or  rectangle r(5,2);    if we give parameter then it will work as parametarize constructor. if we wont then it will work as non parameterize as it value is set to zero initially.

    cout<<"length is  : "<<r.getLength()<<endl;
    cout<<"breadth is  : "<<r.getBreadth()<<endl;
    cout<<"area is  : "<<r.area();

    return 0;
}     
