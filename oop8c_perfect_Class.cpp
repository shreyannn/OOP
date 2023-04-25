
#include <iostream>        
using namespace std;            // using 2nd way of writing function in class.

class Rectangle{

 private:
    int length;            
    int breadth;

 public:
    Rectangle(int l,int b);                

    void setLength(int l);                   
    void setBreadth(int b);
  
    int getLength(){return length;}                         
    int getBreadth(){return breadth;}

    int area();                               
    int perimeter();

//  int  isSquare();                    
    bool isSquare();

    ~Rectangle();                      

};   

int main(){
    Rectangle r1(5,5);
    cout<<"area is"<<r1.area()<<endl;
    if(r1.isSquare()){
        cout<<"it is a square"<<endl;
    }
    return 0;
}
     
        Rectangle:: Rectangle(int l=0, int b=0){        
            setLength(l);
            setBreadth(b);
        }     
        void Rectangle:: setLength(int l){     
            if(l>=0){
                length=l;
            }
            else{
                length=0;           
            }
        }
        void Rectangle:: setBreadth(int b){
            if(b>=0){
                breadth=b;
            }
            else{
                breadth=0;
            }
        }
        int Rectangle:: area(){
            return length * breadth;   
        }
        bool Rectangle:: isSquare(){
            return length==breadth;
        }
        
        Rectangle::~Rectangle(){
            cout<<"rectangle is destroyed";         // this function will automatically be called.
        }
        

           

        