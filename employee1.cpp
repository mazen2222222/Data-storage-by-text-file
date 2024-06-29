#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream employee;
    employee.open("employee.txt", ios::in);
    if (employee.is_open())
    {
        string line;
        while (getline(employee, line))
        {
            cout << line << "\n";
        }
        employee.close();
    }
}