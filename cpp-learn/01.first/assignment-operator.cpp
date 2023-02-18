// 6 types of assignment operators =,+=,-=,*=,/=,%=

#include<iostream>
using namespace std;

int main()
{
    int x=5,y=3;

    // = assign
    x=y;
    cout<<"Value of X is: "<<x <<endl;

    // += plus assign
    x +=y; // x=x+y
    cout<< "Value of X is: "<<x <<endl;

    // -= minus assign    x -=y; // x=x-y
    cout<< "Value of X is: "<<x <<endl;

    // *= multiplicaton assign    x *=y; // x=x*y
    cout<< "Value of X is: "<<x <<endl;

    // += division assign    x /=y; // x=x/y
    cout<< "Value of X is: "<<x <<endl;

    // += reminder assign    x %=y; // x=x%y
    cout<< "Value of X is: "<<x <<endl;


    return 0;
}
