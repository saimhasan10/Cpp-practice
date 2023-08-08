#include <bits/stdc++.h>
using namespace std;

// class
class Employee
{
public:
    string employeeName;
    string employeeId;
    int employeeSalary;

    // constructor
    Employee(string name, string id, int salary)
    {
        employeeName = name;
        employeeId = id;
        employeeSalary = salary;
    }

    // function for printing
    void massage()
    {
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Salary: " << employeeSalary << endl;
    }

    // destructor
    ~Employee()
    {
        cout << "The object has gone";
    }
};

int main()
{
    // declaring object
    Employee e1("Mr.Bean", "112B", 20000);

    // calling print function which i named massage
    e1.massage();
    return 0;
}
