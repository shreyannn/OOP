#include <iostream>
using namespace std;

class rectangle{
    private:
        int length;
        int breadth;
    public:                 
        void setLength(int l){     
            if(l>=0){
                length=l;
            }
            else{
                length=0;           
            }
        }
        void setBreadth(int b){
            if(b>=0){
                breadth=b;
            }
            else{
                breadth=0;
            }
        }
        int getLength(){
            return length;
        }
        int getBreadth(){
            return breadth;
        }

        int area(){
            return length * breadth;   
        }
};

class cube :public rectangle{     
    private:    
        int height;

    public:
        // length=5;        we cannot access length since length is private;    we will give value to length using public function setLength();
        cube (int l=0, int b=0, int h=0){
            height=h;
            setLength(l);                  // we set value of length using function since it is a private data member.
            setBreadth(b);
        };
        
        void setHeight(int h){          // if we need ot set value of heigth outside cube class. ie. in main() function.
            if(h>=0){
                height=h;
            }
            else{
                height=0;           
            }
        }
        int getHeight(){
            return height;
        }

        int volume(){
            return getLength() * getBreadth() * height;         // we cannot write length , breadth directly.
        }
};

int main(){
    cube c1(2,3,4);
    cout<<c1.volume()<<endl;        // fome cube
    cout<<c1.area()<<endl;             // from rectangle but is inherited into cube.
    return 0;
}