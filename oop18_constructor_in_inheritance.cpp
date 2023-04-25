// important topic
/*
# Constructors in inheritance
• Constructors of base class is executed first then the constructor of derived class is executed.
• By default, non-parameterised constructor of base class is executed.
• parameterised constructor of base class must be called from derived class constructor               */

#include <iostream>
using namespace std;


class base{                                                                                     //  parent class
    public:
        int x=5;
        base(){
            cout<<endl<<" default/unparametarize constructor of base "<<endl;
        }
        base(int x){
            cout<< " param of base "<<x<<endl;
        }
};


class derived :public base{         // derived class inheriting public from base class.        //    child class
    public:
    derived(){    
        cout<<" default/unparametarize constructor of derived "<<endl;
    }
    derived(int a){    
        cout<<" param of derived "<<a<<endl;
    }
    derived(int a, int x) : base(x){                               //     : base (x)     calling param constructor of base.
        cout<<" param of derived "<<a<<endl;
    }
};


int main(){

    // derived d1;          //  1st.  default/unpara constructor call.      first ->  parent class ko default constructor print hunxa then -> child class ko deafult.              constructor
    cout<<endl<<endl;

    // derived d1(10);       / 2nd.   para constructure call.      first -> parent class ko default constructure. then -> child class ko param        
    // cout<<endl<<endl;                                            //  since, we arenot passing the value of x.

    derived d1(10,5);           // 3rd.   thus, we can call parametarize constructor of base class using derive class construtor
    return 0;
}