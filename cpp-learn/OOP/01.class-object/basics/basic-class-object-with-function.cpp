#include<iostream>
using namespace std;

//class declaration with function
class student
{
public:
    int id;
    double cgpa;

    //declaration function inside public
    void display()
    {
        cout<<id<<"  "<<cgpa<<endl;
    }
};



int main()
{
    student saim,hasan,nahid;

    saim.id = 22;
    saim.cgpa = 12.22;
    saim.display();


    hasan.id = 33;
    hasan.cgpa = 13.33;
    hasan.display();

    nahid.id = 44;
    nahid.cgpa = 14.44;
    nahid.display();

}

