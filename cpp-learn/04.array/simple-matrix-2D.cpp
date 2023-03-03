// simple matrix input and print it

#include<iostream>
using namespace std;

int main()

{

    int row,col;
    cout<<"Enter the number of row and col: ";
    cin>>row>>col;

    int A[row][col];

    //input matrix
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
          cout<<"A["<<i<<"]["<<j<<"] = ";
          cin>>A[i][j];
        }
    }

     // print matrix

     for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
          cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }




}

