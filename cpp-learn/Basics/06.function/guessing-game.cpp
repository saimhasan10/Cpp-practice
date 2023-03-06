#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{

    while(1)
    {
        int guessNumber,randomNumber;

        cout<<"Enter a guess number between 1 to 5: "<<endl;
        cin>>guessNumber;

        randomNumber = rand()%5 + 1;

        if(randomNumber==guessNumber)
        {
            cout<<"You have won!!!"<<endl;
        }
        else
        {
            cout<<"upss!! You have lost. try again mamu " << endl;
            cout<<"Random number was: "<<randomNumber<<endl<<endl;
        }

    }
}

