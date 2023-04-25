/* write a class for student with 1) roll no.  2) name   3) marks in 3 subjects and function for total marks abd grade */

#include <iostream>
using namespace std;

class student
{
private:
    int roll;
    string name;
    int marks1, marks2, marks3, total;
    float percentage;

public:
    student(int m1, int m2, int m3)
    {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }
    void totalmarks()
    {
        total = marks1 + marks2 + marks3;
        cout << "total marks is : " << total << endl;
        percentage = total / 3; // percentage=(total/300)*100;    didnt work
        cout << "percentage is : " << percentage << endl;
    }
    void grade()
    {
        if (percentage < 40 || marks1 < 40 || marks2 < 40 || marks3 < 40)
        {
            cout << "failed";
        }
        else if (percentage >= 40 && percentage < 60)
        {
            cout << "2nd division";
        }
        else if (percentage >= 60 && percentage < 80)
        {
            cout << "1st division";
        }
        else
        {
            cout << "distinction";
        }
    }
};

int main()
{

    int roll;
    string name;
    int m1, m2, m3;
    cout << "enter your rollno : ";
    cin >> roll;
    cout << "enter your name : ";
    cin >> name;
    cout << "enter your marks in 3 subjects : ";
    cin >> m1 >> m2 >> m3;

    student s1(m1, m2, m3);
    s1.totalmarks();
    s1.grade();
    return 0;
}