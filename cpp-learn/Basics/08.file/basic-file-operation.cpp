#include<iostream>
#include<fstream>//for file
#include<string>

using namespace std;


int main()
{
    string name;
    ofstream file;


    file.open("data.txt",ios::out|ios::app);// to append data

    cout<<"Enter your name: ";
    getline(cin,name);

    // write in file
    file<<"Hey "<<name<<endl;

    file.close();

    cout<<"Your data has been stored"<<endl;
}
