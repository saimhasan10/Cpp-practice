//special operators are sizeof(),comma,asterisk

#include<iostream>
using namespace std;

int main()
{
    // sizeof operator to find the size
    int a;
    float b;
    double c;
    char d;

    int x= sizeof(a);
    int y= sizeof(b);
    int z= sizeof(c);
    int n= sizeof(d);

    cout<< x<<endl<<y<<endl<<z<<endl<<n<<endl;

    // comma operator
    int i,j,sum;

    sum = (i=7,j=3,sum=i+j);

    cout<<sum;

}
