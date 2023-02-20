// using ternary operator

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter any number";
    cin>>num;

    //(condition) ? expression_1 : expression_2

    (num%2==0)? cout<<"This is even" : cout<<"This is odd";

    return 0;
}
