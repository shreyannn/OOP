/* write a program to demonstrate polymorphism
  base class       1) shape
  derive class     1) rectangle.
                   2) circle.              */

#include <iostream>
using namespace std;

class shape
{
public:
  virtual float area() = 0;
  virtual float perimeter() = 0;
};

class rectangle : public shape
{
private:
  float length;
  float breadth;

public:
  rectangle(float l, float b)
  {
    length = l;
    breadth = b;
  }
  float area() { return length * breadth; }
  float perimeter() { return 2 * (length + breadth); }
};

class circle : public shape
{
private:
  float radius;

public:
  circle(float r)
  {
    radius = r;
  }
  float area() { return (float)22 / 7 * radius * radius; } //* typecasting  (int/int)= int
  float perimeter() { return 2 * (float)22 / 7 * radius; } //* see this line.
};

int main()
{
  rectangle r1(2, 3);
  cout << " area of rectangle is : " << r1.area() << endl;
  cout << " perimeter of rectangle is : " << r1.perimeter() << endl;

  circle c1(5.5);
  cout << " area of circle is : " << c1.area() << endl;
  cout << " perimeter of circle is : " << c1.perimeter() << endl;
  return 0;
}