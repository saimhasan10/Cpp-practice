/*
&	Binary AND
|	Binary OR
^	Binary XOR
~	Binary One's Complement
<<	Binary Shift Left
>>	Binary Shift Right

Every number convert into binary then start work
*/

#include<iostream>
using namespace std;

int main()
{
    int x=32,y=12,z;

    z=x&y;
    cout<<z<<endl;

    z=x|y;
    cout<<z<<endl;

    z=x^y;
    cout<<z<<endl;

    z=x>>3;// 3 times divide with 2
    cout<<z<<endl;

    z=x<<3;// 3 times multiply with 2
    cout<<z<<endl;



    return 0;
}

