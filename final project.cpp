#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    cout << "if you want the employee's data enter 1\n";
    cout << "if you want customer's data enter 2\n";
    cout << "if you want the shipping employee's data enter 3\n";
    cout << "if you want books' data enter 4\n";
    cout << "if you want orders' data enter 5\n";
    cout << "if you want payment ways' data enter 6\n";
    int x;
    cin >> x;
    if (x == 1)
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
    else if (x == 2)
    {
        fstream customer;
        customer.open("customer.txt", ios::in);
        if (customer.is_open())
        {
            string line;
            while (getline(customer, line))
            {
                cout << line << "\n";
            }
            customer.close();
        }
    }
    else if (x == 3)
    {
        fstream shipping;
        shipping.open("shipping.txt", ios::in);
        if (shipping.is_open())
        {
            string line;
            while (getline(shipping, line))
            {
                cout << line << "\n";
            }
            shipping.close();
        }
    }
    else if (x == 4)
    {
        fstream book;
        book.open("book.txt", ios::in);
        if (book.is_open())
        {
            string line;
            while (getline(book, line))
            {
                cout << line << "\n";
            }
            book.close();
        }
    }
    if (x == 5)
    {
        fstream order;
        order.open("order.txt", ios::in);
        if (order.is_open())
        {
            string line;
            while (getline(order, line))
            {
                cout << line << "\n";
            }
            order.close();
        }
    }
    else if (x == 6)
    {
        fstream payment;
        payment.open("payment.txt", ios::in);
        if (payment.is_open())
        {
            string line;
            while (getline(payment, line))
            {
                cout << line << "\n";
            }
            payment.close();
        }
    }
    else
    {
        cout<<"invalid number";
    }
}