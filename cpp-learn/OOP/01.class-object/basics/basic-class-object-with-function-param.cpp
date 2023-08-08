// using function parameter for more efficiency

#include<iostream>
using namespace std;

class student
{
public:
    int id;
    double cgpa;

    //value set function for class variable
    void setValue(int x, double y)
    {
        id=x;
        cgpa = y;
    }

    //value display function
    void display()
    {
        cout<<id<<"  "<<cgpa<<endl;
    }
};



int main()
{
    student saim,hasan,nahid;

    saim.setValue(77,17.77);
    saim.display();

    hasan.setValue(88,18.88);
    hasan.display();

    nahid.setValue(99,19.99);
    nahid.display();
}
