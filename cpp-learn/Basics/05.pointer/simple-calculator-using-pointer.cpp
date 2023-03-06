//simple calculator using pointer

#include<iostream>
using namespace std;

int main()
{
    char oper;
    cout<<"select a operator you want(+,-,*,/): ";
    cin>>oper;

    float num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    float *p1,*p2;

    p1 = &num1;
    p2 = &num2;


    switch(oper)
    {
    case '+':
        cout<<"Sum of two numbers is: "<<(*p1)+(*p2);
        break;
    case '-':
        cout<<"Subtraction of two numbers is: "<<(*p1)-(*p2);
        break;
    case '*':
        cout<<"Multiplication of two numbers is: "<<(*p1)*(*p2);
        break;
    case '/':
        cout<<"Division of two numbers is: "<<(*p1)/(*p2);
        break;
    default:
        cout<<"Please enter a valid operator!!";
        break;

    }



}
