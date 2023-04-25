/*
   OOP is a method / model  of developing an application.
   there are other processes as well. We used procedural / modular programming in C language.
   Here, in c++ we will be using OOP for an efficient code.

  * principles of OOP
    i)   abstraction         -- hiding the inner complexity
    ii)  encapsulation       -- data hiding     private:    public:      in telephone box, everything are hiddens inside the box, only the buttons are available outside which are functions. when we press button, the function is called.

    iii) inheritance         
    iv)  polymorphism
    

  Classes

• Class is a blue print of an object
• Class in a group of objects
• Class is a design of object
• Many object can be created from same class

• Object consumes memory equal to sum of sizes of all data members. 
• Member functions don’t occupy memory
• Member functions are called depending on object

• . Dot operator is used for accessing members of object    eg- e1.name
• Memory allocated for object is also called as instance.



class identity{
  int name;
  char str[45];              these are the blueprint of objects.   class wont consume memory
  
  int function()
};

int main(){
  identity r1,r2,r3;             here, r1,r2,r3 are objects.  object's members are stored in stack memory
  return 0;
}

*/
