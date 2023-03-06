#include<iostream>
using namespace std;


int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n* fact(n-1);
}


int main()
{
    int x;
    cout<<"Enter the a number to find it's factorial: ";
    cin>>x;

    int result = fact(x);

    cout<<"Result is: "<<result;

}
