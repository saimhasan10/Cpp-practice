#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main()
{
    string name,line;
    int age;

    //write to file
    ofstream file;
    file.open("Student-detail.txt",ios::out|ios::app);


    for(int i=0; i<3; i++)
    {

        cout<<"Enter your name: ";
        getline(cin,name);
        file<<name<<"\t";

        cout<<"Enter your age: ";
        cin>>age;
        file<<age<<endl;

        cin.ignore();

    }

    //read from file
    ifstream file2("Student-detail.txt");

    while(getline(file2,line))
    {
        cout<<line<<endl;
    }

    file.close();
}
