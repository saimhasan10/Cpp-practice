// Access private members by using friend class

#include<iostream>
using namespace std;

class A
{
private:
    int id=897;
    string name="Saim";

public:
    friend class B;
};

class B // same as friend class
{
public:
    void display(A ob)//need to create an object of that class where to access
    {
        cout<<ob.id<<"  "<<ob.name<<endl;
    }
};


int main()
{
    A ob1;
    B ob2;

    ob2.display(ob1);//sending the object of class A to B class
}
