#include <bits/stdc++.h>
using namespace std;

class grandpa
{
public:
    void g_display()
    {
        cout << "hey idiot! me tera bap ka bhi bap hu" << endl;
    }
};

class papa : public grandpa
{
public:
    void p_display()
    {
        g_display(); // inherited from grandpa
        cout << "Me tera bap hu samja !!" << endl;
    }
};

class child : public papa
{
public:
    void c_display()
    {
        p_display(); // inhereted from papa
        cout << "i am that Idiot lol !!" << endl;
    }
};

int main()
{
    child c1;
    c1.c_display();

    return 0;
}
