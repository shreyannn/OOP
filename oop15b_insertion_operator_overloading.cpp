#include <iostream>
using namespace std;

class complex
{
private:
    int real;
    int imaginary;

public:
    complex(int r = 0, int i = 0)
    { 
        real = r;
        imaginary = i;
    }

    friend ostream & operator<< ( ostream &o, complex &c1);   // function prototype.  call by reference.     ostream datatype to store cout function/object.    2 parameter passed. so, it will be call by reference.   
};

    ostream & operator<< ( ostream &o, complex &c1)
    {
        o<<c1.real<< " + i " <<c1.imaginary;     // o le cout ko kaam garxa.
        return o;                                    // return datatype ostream bhako le garda return o; gareko (standard method, yei garnu)   ---  return datatype void bhako bhaye return ni garnu parthena (but dont do it. see below)                                
    }
    
int main()
{
    complex c1(2,6);   
    cout<<c1;         // here, << is operator. cout and c1 is operand. this is equivalent to   operator<<(cout,c1);
//  operator<<(cout,c1);                                  
    return 0;               
}



/* friend void operator<< (ostream &o, complex &c1);  


    void operator<< ( ostream &o, complex &c1)
    {
        o<<c1.real<< " + i " <<c1.imaginary;                ---  return datatype void bhayeko le return ni garnu pardeina (but dont do it because we cannot use another insertion operator in same line)                                
    }
 
int main(){
    cout<<c1;            cout << c1 << endl;    now this will show error.                   if you return ostream then it you use << operator multiple times because it will suppose cout<<c1 whole function as cout function at end;
    return 0;
}
    */