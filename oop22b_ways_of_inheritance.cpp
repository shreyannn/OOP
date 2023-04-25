//protectedly
#include<iostream>
using namespace std;

class Parent{
   private:
      int a;
   protected:           // *
      int b;
   public:             //**
      int c;
      void funParent(){
        a=10;
        b=5;
        c=15;
    }
};

class Child: protected Parent{

   protected:                     //*        //**
   public:
      void funChild(){
      //a=10;
      b=5;
      c=15;
    }
};

class GrandChild : public Child{
   protected:                        //*       //**
   public:
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

    // m1.c=20;                            //cannot access protected data inside main function.
    // cout<<m1.c;
    return 0;
}

