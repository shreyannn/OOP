//privately 
#include<iostream>
using namespace std;

class Parent{
   private:
      int a;
   protected:        //*
      int b;
   public:           //**
      int c;
      void funParent(){
        a=10;
        b=5;
        c=15;
    }
};

class Child: private Parent{

   private:            //*  //**
   protected:
   public:
      void funChild(){
    //a=10;
      b=5;
      c=15;
    }
};

class GrandChild : protected Child{                 // not possible  
   
};

int main(){
    Parent m1;                    // parent accessible,  child not accessible since it in private
    //m1.a=10;
    //m1.b=5;
    m1.c=20;
    cout<<m1.c;
    
   
    return 0;
}

