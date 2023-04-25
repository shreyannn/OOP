/* 
Access specifiers (or access modifiers) are keywords in object-oriented languages 
that set the accessibility of classes, methods, and other members.                    used for encapsulation(data hiding)

   access specifiers      (access -> read n write)
       
    • Private - Accessible only inside a class
    • Protected - Accessible inside a class and inside derived classes
    • Public - accessible inside class, inside derived class and upon object

*/
#include<iostream>
using namespace std;

class Base{
  private: 
      int a;
  protected:
      int b;
  public:
      int c;
      void funBase(){
         a=10;                // inside class, a,b,c can be accessed.      (priv, protected, public)
         b=5;
         c=15;
      }
};
class Derived: Base{                                                                        // class Derived: public Base{
   public:
      void funDerived(){
         // a=10;                   // inside derived class, b and c can be accessed       (protected, public)
         b=50;  
         c=15;
      }
};

int main(){
   Base M1;
      // M1.a=10;                    // inside main function, c can be accessed.             (public)
      // M1.b=5;
      M1.c=20;

      // use mutator and accessor function inside base class to access value of private.

   return 0;
}