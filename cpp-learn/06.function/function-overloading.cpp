//same function name but different parameter is known as function overloading

#include<iostream>
using namespace std;

void sum(int a,int b)
{
    int result= a+b;
    cout<<result<<endl;
}

void sum(int a,int b,int c)
{
    int result = a+b+c;
    cout<<result<<endl;
}

void sum(double a,double b)
{
    double result = a+b;
    cout<< result<<endl;
}

int main()
{

    sum(5,6);
    sum(5,6,7);
    sum(5.5,6.6);


}
