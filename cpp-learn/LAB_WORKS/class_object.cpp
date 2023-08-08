#include <bits/stdc++.h>
using namespace std;

// class
class Employee
{
public:
    string employeeName;
    string employeeId;
    int employeeSalary;

    // function for printing
    void massage()
    {
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Salary: " << employeeSalary << endl;
    }
};

int main()
{
    // declaring object
    Employee e1;

    // initializing object
    e1.employeeName = "Modon Mohon torkalankar";
    e1.employeeId = "1122";
    e1.employeeSalary = 20000;

    // calling print function
    e1.massage();
    return 0;
}
