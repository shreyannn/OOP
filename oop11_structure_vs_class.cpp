/* difference between class and structure
   
->  by default everything is private inside class whereas public in structure.     */


#include <iostream>
using namespace std;

struct demo{
    int x;
    int y;

    void display(){                 // in c++, we can also write function inside structure.
        cout<<"helloworld";
    }
};

int main(){
    demo d;
    d.x=5;
    d.y=2;
    d.display();
    return 0;
}



// #include <iostream>
// using namespace std;

// class demo{
// public:
//     int x;
//     int y;

//     void display(){                 // in c++, we can also write function inside structure.
//         cout<<"helloworld";
//     }
// };

// int main(){
//     demo d;
//     d.x=5;
//     d.y=2;
//     d.display();
//     return 0;
// }