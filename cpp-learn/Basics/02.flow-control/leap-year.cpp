#include<iostream>
using namespace std;

int main()
{
    int year;

    cout<<"Enter any year: ";
    cin>>year;

    if(year%4==0 && year%100 != 0)
        cout<<year<<" is  leap year";

    else if(year %400==0)
        cout<<year<<" is  leap year";

    else
        cout<<year<<" is not leap year";
}
