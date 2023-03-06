// Find the factorial number
#include<iostream>
using namespace std;

int main()
{

    int i,n,fact=1;

    cout<<"Enter a number: ";
    cin>>n;

    if(n<0)
    {
        cout<<"Please enter an positive number.";
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            fact *=i;
        }
        cout<<"Factorial of "<< n<< " is: "<<fact<<endl;
    }

    return 0;
}
