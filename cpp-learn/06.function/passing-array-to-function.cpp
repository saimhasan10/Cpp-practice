#include<iostream>
using namespace std;

void showArray(int arra[], int arraySize)
{
    cout<<"The elements you have entered: ";
    for(int i=0; i<arraySize; i++)
    {
        cout<<arra[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    cout<<endl;

    int arr[n];
    cout<<"Enter the elements of the array: ";

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    showArray(arr,n);

}
