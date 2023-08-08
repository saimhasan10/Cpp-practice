#include <bits/stdc++.h>
using namespace std;

class vehicle
{
protected:
    int distance = 500;

public:
    void message()
    {
        cout << "Distance: " << distance << endl;
    }
};

class car : public vehicle
{
private:
    int time = 67;

public:
    void message()
    {
        cout << "The speed is: " << distance / time << endl;
    }
};

int main()
{
    car mustang;
    mustang.message();

    return 0;
}
