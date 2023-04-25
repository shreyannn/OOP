/* write a class of employee
derive class
1) full time employee with salary
2) part time employee with daily wages */

#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    string name; // char name[10];

public:
    employee(int idd, string nname)
    {
        id = idd;
        name = nname; // name = nname; (error)
    }
    string getname()
    {
        return name;
    }
    int getid()
    {
        return id;
    }
};

class fulltime : public employee
{
private:
    int salary;

public:
    fulltime(int idd, string nname, int sal) : employee(idd, nname)
    {
        salary = sal;
    }
    int getsalary()
    {
        return salary;
    }
};

class parttime : public employee
{
private:
    int wages;

public:
    parttime(int idd, string nname, int wag) : employee(idd, nname)
    {
        wages = wag;
    }
    int getwages()
    {
        return wages;
    }
};

int main()
{

    fulltime f1(1, "rahul", 55000);
    parttime f2(2, "aadi", 9000);
    cout << "salary of " << f1.getname() << "(" << f1.getid() << ")"
         << " is : " << f1.getsalary() << endl;
    cout << "salary of " << f2.getname() << "(" << f2.getid() << ")"
         << " is : " << f2.getwages();

    return 0;
}