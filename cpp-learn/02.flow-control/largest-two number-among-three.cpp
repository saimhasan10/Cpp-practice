//Find the largest two numbers among three numbers

#include<iostream>
using namespace std;

int main()
{
    int num1,num2,num3;

    cout<<"Enter three numbers: ";
    cin>> num1>>num2>>num3;

    // condition one
    if(num1>num2 && num1>num3)
    {
        if(num2>num3)
        {
            cout<<"The largest two numbers are: "<<num1<<" "<<num2;
        }
        else
            cout<<"The largest two numbers are: "<<num1<<" "<<num3;
    }

    //conditon two
    else if(num2>num1 && num2>num3)
    {
        if(num1>num3)
        {
            cout<<"The largest two numbers are: "<<num2<<" "<<num1;
        }
        else
            cout<<"The largest two numbers are: "<<num2<<" "<<num3;
    }


    //condition three
    else if(num3>num1 && num3>num2)
    {
        if(num1>num2)
        {
            cout<<"The largest two numbers are: "<<num3<<" "<<num1;
        }
        else
            cout<<"The largest two numbers are: "<<num3<<" "<<num2;
    }

    return 0;


}
