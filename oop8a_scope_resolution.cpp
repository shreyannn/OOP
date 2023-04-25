#include <iostream>
using namespace std;

class rectangle {
    private:             
    int length;
    int breadth;
    
    public:
    rectangle();

    int area(){
        return length*breadth;
    }
    int perimeter();
};


    int rectangle:: perimeter(){            //  here, the :: operator will show that the scope of the perimeter function is inside class rectangle.                  bichama rectangle:: add garne
        return 2*(length+breadth);
    }
    
    rectangle::rectangle(){             // scope resolutionfor constructor
        length=1;
        breadth=1;
    }

int main(){
    rectangle r;   
    cout<<r.area()<<endl;
    cout<<r.perimeter();
    return 0;
}