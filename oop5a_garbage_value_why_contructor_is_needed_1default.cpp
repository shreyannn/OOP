#include <iostream>
using namespace std; 

class rectangle{

    private:
        int length;
        int breadth;
    public:      

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
    rectangle r;          // here, r is contructed. what contructed it? It is built-in function which is contructed by the compiler by converting it into machine level language. So, it is known as 1) default constructor.

    // intially garbage value is assigned to length and breadth.      which is philosophically incorrect. c++ is all about philosophy.
    cout<<"length is  :"<<r.getLength()<<endl;
    cout<<"breadth is  :"<<r.getBreadth()<<endl;
    cout<<"area is  :"<<r.area();

    //thus, constructor is used to give pre-assigned value.

    return 0;
}     
