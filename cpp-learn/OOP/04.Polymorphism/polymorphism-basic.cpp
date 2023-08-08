// basic runtime polymorphism example which denotes the function overriding


#include<iostream>
using namespace std;

class person
{
public:
   virtual void display()// by making it virtual every else can use it (while using pointer )
    {
        cout<<"I am person"<<endl;
    }
};

class student :public person
{
public:
    void display()
    {
        cout<<"I am student"<<endl;
    }
};

class teacher :public person
{
public:
    void display()
    {
        cout<<"I am teacher"<<endl;
    }
};

int main()
{
    //in a basic way
    /*
    person p;
    p.display();

    student s;
    s.display();

    teacher t;
    t.display();
    */

// using pointer

    person *p;// only the super class always be the pointer
    student s;
    teacher t;

    p = &s;
    p -> display();

    p = &t;
    p->display();




}
