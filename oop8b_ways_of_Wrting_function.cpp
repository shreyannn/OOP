#include <iostream>
using namespace std;

class rectangle {
    private:             
    int length;
    int breadth;
    
    public:
    rectangle(){
        length=1;
        breadth=1;
    }
    int area(){                                 // first way
        return length*breadth;
    }
    int perimeter();                             // second way
};


    int rectangle:: perimeter(){            
        return 2*(length+breadth);
    }

int main(){            //   we can see their difference in machine code when compiler compiles it. 
//                         the machine code is same for both but are placed in different sections.

    rectangle r;   
    cout<<r.area()<<endl;         // it will be placed inside main function code.
    cout<<r.perimeter();               // it will be placed outside main function code.
    return 0;
}