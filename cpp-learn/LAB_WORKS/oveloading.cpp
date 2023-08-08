#include <bits/stdc++.h>
using namespace std;

class vehicle
{
protected:
    int distance = 500;

public:
    void print(int dist1, int dist2)
    {
        cout << "Total distance: " << dist1 + dist2 << endl;
    }

    void print(string car1, string car2)
    {
        cout << "I have " << car1 << " and " << car2 << " also " << endl;
    }
};

int main()
{
    vehicle vh;
    // vh.print(5, 5);
    vh.print("Urus", "GTR");

    return 0;
}
