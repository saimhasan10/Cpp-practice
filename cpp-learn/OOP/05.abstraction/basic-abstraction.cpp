#include <iostream>
using namespace std;

// abstract function because here we use PVF
class mobileUser
{
public:
    void call()
    {
        cout << "hey!!" << endl;
    }

    // pure virtual function
    virtual void sendMessage() = 0;
};

class saim : public mobileUser
{
public:
    // must have to use the PVF
    void sendMessage()
    {
        cout << "This is saim bro!!!" << endl;
    }
};

class nahid : public mobileUser
{
public:
    void sendMessage()
    {
        cout << "This is Nahid bro!!" << endl;
    }
};

int main()
{
    mobileUser *m;

    saim s;
    nahid n;

    m = &s;
    m->call();
    m->sendMessage();

    m = &n;
    m->sendMessage();
}
