#include<iostream>
#include<iomanip>//input output manipulation (setprecision)
using namespace std;

int main()
{
    float num1,num2,sum,sub,mul,div;

    cout<<"Enter two integer number:";
    cin>>num1 >>num2;

    // to show the value after point
    cout<< showpoint;
    // control value length after point
    cout<< fixed;
    cout << setprecision(3);

    //summation
    sum= num1+num2;
    cout<< "Sum is: "<<sum<<endl;

    // not to show the value after point except division term
    cout<<noshowpoint;

    //subtraction
    sub= num1-num2;
    cout<<"sub is: "<<sub<<endl;

    //Multiplication
    mul= num1*num2;
    cout<<"Mul is: "<<mul<<endl;

    //Division
    div= num1/num2;
    cout<<"Div is: "<<div<<endl;

    //setw() use to set the width(size) of output

    return 0;
}
