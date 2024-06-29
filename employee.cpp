#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream employee;
    employee.open("employee.txt", ios::out);
    if (employee.is_open())
    {
        employee << "Name: Taha Mahmoud | ID: 305070627 | Email: Ta174@gmail.com | Address: Egypt-Aswan-Al Sadat | Salary: 1000$ \n";
        employee << "Name: Youssef Badawy | ID:305070626 | Email: yO658@gmail.com | Address: Egypt-Alex-Fouad | Salary: 1200$ \n";
        employee << "Name: Akram Tawfi | ID:305070625 | Email: Ak548@gmail.com | Address: Egypt-Giza-Shehab | Salary: 1250$ \n";
        employee << "Name: Mazen Mohamed | ID:305070624 | Email: mA315@gmail.com | Address: Egypt-Cairo-Al Azhar | Salary: 1150$ \n";
        employee << "Name: Hassan Ahmed | ID:305070623 | Email: ha957@gmail.com | Address: Egypt-Fayoum-Al Ramlah | Salary: 1300$ \n";
        employee << "Name: Mohamed Mahmoud | ID:305070622 | Email: ma331@gmail.com | Address: Egypt-Beni Suef-Saad Bahsa | Salary: 1500$ \n";
        employee.close();
    }
    fstream customer;
    customer.open("customer.txt", ios::out);
    if (customer.is_open())
    {
        customer << "Name: Youssef Hassan | ID: 305010232 | Phone Number: 01112478945 | Address: Egypt Beni Suef Saad Basha\n";
        customer << "Name: Mohamed Saad | ID: 305043031 | Phone Number: 01124896754 | Address: Egypt Cairo Alazhar\n";
        customer << "Name: Youssef Ahmed | ID: 305100930 | Phone Number: 01524896572 | Address: Egypt Giza Shehab\n";
        customer << "Name: Mahmoud Mohamed | ID: 305120628 | Phone Number: 01284759162 | Address: Egypt Aswan Alsadat\n";
        customer << "Name: Zead Mohamed | ID: 305110729 | Phone Number: 01034596871 | Address: Egypt Alex Foad\n";
        customer.close();
    }
    fstream shipping;
    shipping.open("shipping.txt", ios::out);
    if (shipping.is_open())
    {
        shipping << "Name: taha tarek | ID: 3050706254 | Address: Egypt-Aswan-Al shawarby | Salary: $700.00 | Phone Number: 01234897564\n";
        shipping << "Name: abdallah ahmed | ID: 3050706271 | Address: Egypt-cairo-Amin Samy ba | Salary: $500.00 | Phone Number: 01024597864\n";
        shipping << "Name: abdallah mamdouh | ID: 3050706282 | Address: Egypt-Al sharqia-Ahmed Esmae | Salary: 600.00 | Phone Number: 01154896357\n";
        shipping << "Name: youssef emad | ID: 3050706293 | Address: Egypt-bani suef-Salah Salem | Salary: 650.00 | Phone Number: 01578964251\n";
        shipping.close();
    }
    fstream book;
    book.open("book.txt", ios::out);
    if (book.is_open())
    {
        book << "Price: $11.00 | Tybe: short story | Title: A Little Pretty Pocket-Book | Auther: John Newbery\n";
        book << "Price: $10.00 | Tybe: short story | Title: Crime doctor | Auther: Ernest William Hornung\n";
        book << "Price: $12.00 | Tybe: history | Title: History of Syria | Auther: Philip K. Hitti\n";
        book << "Price: $16.00 | Tybe: geographic | Title: Mountains places and water | Auther: Abu Al-Qasim Mahmoud bin Amr\n";
        book << "Price: $20.00 | Tybe: novel | Title: The Alchemist | Auther: Paulo Coelho\n";
        book << "Price: $15.00 | Tybe: novel | Title: The Thief and the Dogs | Auther: Naguib Mahfouz\n";
        book.close();
    }
    fstream order;
    order.open("order.txt", ios::out);
    if (order.is_open())
    {
        order << "cost: $5.00 | deliver time: 1 day | order number: 1\n";
        order << "cost: $4.00 | deliver time: 3 day | order number: 2\n";
        order << "cost: $10.00 | deliver time: 12 day |order number: 3\n";
        order << "cost: $6.00 | deliver time: 2 day |order number: 4\n";
        order << "cost: $3.00 | deliver time: 16 day | order number: 5\n";
        order << "cost: $7.00 | deliver time: 1 day |order number: 6\n";
        order.close();
    }
    fstream payment;
    payment.open("payment.txt", ios::out);
    if (payment.is_open())
    {
        payment << "Youssef Hassan | Cash\n";
        payment << "Mohamed Saad | Cridet\n";
        payment << "Youssef Ahemd | Electronic walet\n";
        payment << "Zead mohamed | Visa\n";
        payment << "Mahmoud Mohamed | Fawry\n";
        payment.close();
    }
}