/* Ways of inheritance

-> A class can be inherited in flowing ways

 • Publicly - All members of base class will have same accessibility in derived class        (protected member of base class will be accessible in protected of derived class, public will be public)      grandchild class can access from protected and public

 • Protectedly - All members of base will become protected in derived class                  (protected and public members will be accessible in protected only)       grand child can access from protected

 • Privately - All members of base will become private in derived class                    (protected and public members will be accessible in private only)        now this cannot be accessed by grand child class.

             (private members cannot be accessed by the use of access specifiers)          */


//publicly
#include<iostream>
using namespace std;

class Parent{
   private:
      int a;
   protected:                                              // *
      int b;
   public:                                                 //  **
      int c;
      void funParent(){
        a=10;
        b=5;
        c=15;
    }
};

class Child: public Parent{                                         //      protected to protected    and    public to public
   
   protected:                                      // *                        yeta protected ma bhako, munu public ma access garna milxa
   public:                                          // **
      void funChild(){
      //a=10;
      b=5;
      c=15;
    }
};

class GrandChild : public Child{                            
   protected:                                           // *
   public:                                               // **
      void funGrandChild(){
      //a=10;
      b=2;
      c=20;
    }
};

int main(){
    GrandChild m1;
    //m1.a=10;
    //m1.b=5;
    m1.c=20;                   
    cout<<m1.c;
    return 0;
}

