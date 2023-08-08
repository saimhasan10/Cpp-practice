//same name with same parameter of every function
//while inheriting it hide the function which come from the super class


#include<iostream>
using namespace std;

class person
{
public:
    void display()
    {
        cout<<"I am a person."<<endl;
    }
};

class student:public person
{
    //function(); come from person
public:
    void display()// override the super class function
    {
        cout<<"I am a student"<<endl;
    }
};


//overridden
class teacher:public person
{
    //function(); come from person
public:
    void display()// override the super class function
    {
        cout<<"I am a teacher"<<endl;
    }
};


int main()
{
    person p;
    p.display();

    student s;
    s.display();

    teacher t;
    t.display();
}
