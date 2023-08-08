#include<iostream>
using namespace std;

class student
{

public:
    string name;

    student(string name)
    {
      //using this to identify the class variable
      this ->name = name;
    }

    void display()
    {
        cout<<name;
    }

};


int main()
{
    student s1("saim");
    //s1.name("saim");
    s1.display();
}

