//data hiding using encapsulation (access specifiers)


#include<iostream>
using namespace std;

class student
{
private:
    string name;

public:
    //setter method
    void setMua(string x)
    {
        name =x;
    }
    //getter method
    string getMua()
    {
        return name;
    }
};


int main()
{
    student s1;
    s1.setMua("Saim");
    cout<<s1.getMua();
}
