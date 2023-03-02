//Calculator using the switch Statement

#include<iostream>
using namespace std;

int main()
{
    char oper;
    float num1,num2;

    cout<<"Enter an operator(+,-,*,/): ";
    cin>>oper;

    cout<<"Enter two number: ";
    cin>>num1>>num2;

    switch(oper)
    {
    case'+':
        cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
        break;
    case'-':
        cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
        break;
    case'*':
        cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
        break;
    case'/':
        cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
        break;
    default:
        cout<<"The operator is not correct!!";
        break;

    }
    return 0;


}
