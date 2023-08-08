// inheritance basic

#include<iostream>
using namespace std;

//super class
class person
{
public:
    string name;
    int age;

    void setValue(string x,int y)
    {
        name = x;
        age =y;
    }

    void display1()
    {
       cout<<"Name is: "<<name<<endl;
       cout<<"Age is: "<<age<<endl;

    }
};

//sub class
class student : public person //inheriting
{
public:
    int id;
    void display2()
    {

        cout<<"ID is: "<<id<<endl;
        display1();
    }
};


int main()
{
    student s1;
    s1.id =897;
    s1.setValue("saim", 22);

    s1.display2();
}
