// #include <iostream>
// using namespace std;

// class rectangle {
//     private:             
//     int length;
//     int breadth;
    
//     public:
//     rectangle(int length, int breadth){
//         length=length;                             // this wont be able to access the data member. since, the function member also has the same name.
//         breadth=breadth;
//     }
//     int area(){
//         return length*breadth;
//     }
// };

// int main(){           
//     rectangle r(5,5);   
//     cout<<r.area();
//     return 0;
// }


#include <iostream>
using namespace std;

class rectangle {
    private:             
    int length;
    int breadth;
    
    public:
    rectangle(int length, int breadth){
        this->length=length;                  // this pointer will tell the compiler that this->length is data member and normal length is funciton member 
        this->breadth=breadth;
    }
    int area(){
        return length*breadth;
    }
};

int main(){           
    rectangle r(5,5);   
    cout<<r.area();
    return 0;
}