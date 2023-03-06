/*
Unary operator works with only one variable while arithmetic operator requires two
*/

#include<iostream>
using namespace std;

int main()
{
    int x=5,y, result;

    result= -5;// change the previous sign into negative
    cout<< result<<endl;

    result = +5; // change the previous sign into positive
    cout<< result<<endl;

    y = x++; // y=5 and x=6
    cout<<y <<" "<< x <<endl;

    y = --x; // y=5 and x=5
    cout<<y <<" "<< x <<endl;


    return 0;
}
