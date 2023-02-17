#include<iostream>
using namespace std;

int main()
{
    int num1;
    float num2;
    char ch;
    double sum;
    char str[100];

    cout<<"Enter two integer number:"<<endl;
    //taking two integer
    cin>>num1 >>num2 ;
    //taking single character & print
    cout<<"Enter a character: ";
    cin>>ch;
    // taking an string
    cout<<"Enter an string: ";
    cin>>str;

    sum=num1+num2;

    cout<<"sum is: " <<sum <<endl <<ch <<endl <<str;

    return 0;
}
