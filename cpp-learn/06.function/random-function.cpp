#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n;
    cout<<"How many random number you want: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int randomNumber= rand();
        cout<<"Random number is: " <<randomNumber<<endl;
    }


}

