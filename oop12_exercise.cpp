/* write a class for student with 1) roll no.  2) name   3) marks in 3 subjects and function for total marks abd grade */

#include <iostream>
using namespace std;

class student{
    private:
        int roll;
        char name[20];
        int marks1,marks2,marks3,total;
        float percentage;

    public:
        void info(){
           cout<<"enter your roll no :";
           cin>>roll;
           cout<<"enter your name :";
           cin>>name;
           cout<<"enter your marks in three subjects :";
           cin>>marks1>>marks2>>marks3;
        }
        void totalmarks(){
           total=marks1+marks2+marks3;
           cout<<total<<endl;
           percentage=total/3;            //percentage=(total/300)*100;    didnt work
           cout<<percentage<<endl;
        }
        void grade(){
            if(percentage<40 || marks1<40 || marks2<40 || marks3<40){
                cout<<"failed";
            }
            else if(percentage>=40 && percentage <60 ){
                cout<<"2nd division";
            }
            else if(percentage>=60 && percentage<80){
                cout<<"1st division";
            }
            else{
                cout<<"distinction";
            }
        }
};

int main(){
    student s1;
    s1.info();
    s1.totalmarks();
    s1.grade();
    return 0;
}