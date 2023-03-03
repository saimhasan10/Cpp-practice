#include<iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    cout<<"Enter the number of student: ";
    cin>>n;

    int student[n];

    for(i=0; i<n; i++)
    {
        cout<<"Enter the marks for student "<<i+1<<": ";
        cin>>student[i];
        sum +=student[i];

    }
    cout<<"Total marks is "<<sum<<endl;

    //find the avarage
    float avg = float(sum)/n;
    cout<<"Average is "<<avg<<endl;

    // maximum and minimum number
    int max = student[0];
    int min = student[0];

    for(i=1; i<n; i++)
    {
        if(max<student[i])
        {
            max=student[i];
        }
        if(min>student[i])
        {
            min = student[i];
        }
    }
    cout<<"Maximum number is: "<<max<<endl;
    cout<<"Minimum number is: "<<min<<endl;

    return 0;


}
