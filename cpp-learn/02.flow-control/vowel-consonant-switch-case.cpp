//find vowel or consonant using switch case method

#include<iostream>
using namespace std;

int main()
{

    char ch;

    cout<<"Enter any letter: ";
    cin>>ch;

    ch = tolower(ch);

    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"Vowel";
        break;

    default:
        cout<<"Consonant";
    }
    return 0;


}
