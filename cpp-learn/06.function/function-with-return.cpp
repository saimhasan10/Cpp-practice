//simple function with return value

#include<iostream>
using namespace std;

double division(double,double);

int main()
{
    double x,y;
    cin>>x>>y;

    double result = division(x,y);
    cout<<result;
}


double division(double a,double b)
{
    double div = a/b;
    return div;
}
