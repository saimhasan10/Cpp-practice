//find the area of triangle and rectangular using basic polymorphism

#include<iostream>
using namespace std;

class shape
{
public:
    double base,height;

    //constructor
    shape(double base, double height)
    {
        // variable initialization
        this -> base = base;
        this -> height= height;
    }

    virtual double area()
    {
        return 0;
    }
};

class triangle:public shape
{
public:
    //constructor for triangle class
    triangle(double base,double height)
    :shape(base,height)// call constructor from super class
    {

    }

     double area()
    {
        return .05 * base *height;
    }
};

class rectangular: public shape
{
public:
    rectangular(double base,double height)
    :shape (base,height)
    {

    }

    double area()
    {
        return base*height;
    }
};

int main()
{
    shape *p;

    triangle t(5.55,6.66);
    rectangular r(7.77, 8.88);

    p=&t;
    cout<<"Area of triangle is: "<<p->area()<<endl;

    p=&r;
    cout<<"Area of rectangular is: "<<p->area()<<endl;
}

