// function template mainly create a function without any data types

#include<iostream>
using namespace std;

// single data type so all parameter will be same data types
template <class myTemplate>

myTemplate add(myTemplate a, myTemplate b)
{
    return a+b;
}


// multiple data types so  parameter will be different data types
template <class myData1, class myData2>

myData1 add2(myData1 a, myData2 b)
{
    return a+b;
}




int main()
{
    cout<<add(12,12)<<endl;
    cout<<add2(12.44,12)<<endl;
}
