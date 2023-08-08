#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
protected:
    int distance = 500;

public:
    void Message()
    {
        cout << "The distance is: " << distance << endl;
    }
};

class car : public Vehicle
{
private:
    int time = 2;

public:
    void isShowSpeed()
    {
        Message();
        cout << "The speed of the car is:" << distance / time << endl;
    }
};

int main()
{
    car urus;
    urus.isShowSpeed();

    return 0;
}
