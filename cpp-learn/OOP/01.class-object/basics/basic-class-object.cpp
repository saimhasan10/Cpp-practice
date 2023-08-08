#include<iostream>
using namespace std;

// class declaration
class student
{
public:
    int id;
    double cgpa;
};


int main()
{
    //object declaration
    student saim,hasan,nahid;

    saim.id = 001;
    saim.cgpa = 9.90;

    hasan.id = 002;
    hasan.cgpa = 10.55;

    nahid.id = 003;
    nahid.cgpa = 11.66;

    cout<<"Saim info: "<< saim.id<<"  "<< saim.cgpa<<endl;
    cout<<"Hasan info: "<< hasan.id<<"  "<< hasan.cgpa<<endl;
    cout<<"Nahid info: "<< nahid.id<<"  "<< nahid.cgpa<<endl;
}

