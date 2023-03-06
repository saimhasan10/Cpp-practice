//simple array input and output

#include<iostream>
using namespace std;

int main()
{
    int marks[5];

    //taking input
    for(int i=0; i<5; i++)
    {
        cout<<"Marks for student "<< i+1<<" = ";
        cin>>marks[i];
    }
    //showing output
    for(int i=0; i<5; i++)
    {

        cout<<marks[i]<<" ";

    }
    return 0;

}
