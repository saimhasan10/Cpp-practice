/*
 --constructor is a special type of function by which an object can be initialized.
 --same name as class or structure
 --Do not need to call it, once you create and good to boom.
 --No return type required.
 -- two types 1.default & 2. parametrized

*/

#include<iostream>
using namespace std;

class student
{
public:
    int id;
    double cgpa;

    //constructor function (parametrized)
    student(int x, double y)
    {
        id=x;
        cgpa=y;
    }


    //constructor function (default)
    student()
    {
        cout<<"This line come from default constructor lol !!!"<<endl;
    }

    // display function
    void display()
    {
        cout<<id << "  "<<cgpa<<endl;
    }
};

int main()

{
    student le_halua;


    student saim(33, 23.44);
    saim.display();

    student hasan(44, 34.55);
    hasan.display();

}
