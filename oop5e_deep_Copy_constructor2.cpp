#include <iostream>
using namespace std;

class test{
    private: 
        int a;
        int *p;
    public:
        test (int x){            
            a=x;
            p=new int[a];
        }
        test(test &t){
            a=t.a;             // accessing value of first constructor.

            // p=t.p;             // this will point at the same array created by parametarize constructor.
            p=new int[a];          // this will create a copy of array and point at it.                        important part to focus while create deep copy constructor       Dynamically allocates memory for 10 integers continuously of type int and returns pointer to the first element of the sequence, which is assigned to p(a pointer). p[0] refers to first element, p[1] refers to second element and so on. 
 
        }
        int square(){
            return a*a;
        }
        
};

int main (){
    test t(2);
    test t2(t);       // deep copy constructor

    cout<<t2.square();          
    return 0;
}