
// constructor initializer list

#include<iostream>
using namespace std;

class student
{
public:
    int id;
    const int admitfees;
    const int examfees;

    student(int x, int y,int z)
    :admitfees(x),examfees(y)// constant variable initializer
    {
        id=z;
        cout<<"ID is "<<id<<endl;
        cout<<"The admission fee is: "<<admitfees<<endl;
        cout<<"The exam fee is: "<<examfees<<endl;
    }
};



int main()
{

    student s1(12000,9000,897);


}
