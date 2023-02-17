Tempeture conversions

#include<iostream>
using namespace std;

int main()
{
    double far,cels,kel;
    cout<< "Enter celsius value: ";
    cin>> cels;

    //celsius to Fahrenheit
    far =1.8*cels+32;

    //Fahrenheit to celsius
    //cels = (far-32)/1.8;

    // celsius to kelvin
    //kel=cels + 273;


    cout<<"Fahrenheit value is: "<<far<<endl;
    return 0;

}
