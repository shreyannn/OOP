#include <iostream>
using namespace std;
 
 int area(int length , int breadth){
     return length*breadth;
 }
 float area(float length, float breadth){
     return length*breadth;
 }
 int area(int a){
     cout<<"hello";
 }
int main(){
    int a=5, b=2;
    cout<<area(a,b)<<endl;                   // we cannot pass the value directly as parameter when there is function overloading.
    float x=5.3,y=2.3;
    cout<<area(x,y);
    return 0;
}