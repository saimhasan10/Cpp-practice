// Multiple function without return value

#include<iostream>
using namespace std;

//prototypes
void addition(int, int);
void subtraction(int, int);
void multiplicaton(int, int);
void division(int, int);

int main()
{
    int x,y;
    cout<<"Enter two positive numbers: ";
    cin>>x>>y;

    addition(x,y);
    subtraction(x,y);
    multiplicaton(x,y);
    division(x,y);

}

void addition(int a, int b)
{
    int sum= a+b;
    cout<<"Addtion is: "<<sum<<endl;
}

void subtraction(int a, int b)
{
    int sub= a-b;
    cout<<"Subtraction is: "<<sub<<endl;
}

void multiplicaton(int a, int b)
{
    int mul= a*b;
    cout<<"Multiplication is: "<<mul<<endl;
}
void division(int a, int b)
{
    float div= (float)a/b;
    cout<<"Division is: "<<div<<endl;
}
