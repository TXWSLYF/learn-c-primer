#include <iostream>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double price = 0.0;
};

Sales_data fun(Sales_data a)
{
    return a;
}

int main()
{
    Sales_data data1;
    data1.bookNo = "book-1";

    Sales_data data2 = data1;
    data2.bookNo = "book-2";

    auto data3 = fun(data2);
    data3.bookNo = "book-3";

    std::cout
        << data1.bookNo << "\n"
        << data2.bookNo << "\n"
        << data3.bookNo << std::endl; // 输出啥？

    // std::cin >> data1.bookNo >> data1.units_sold >> data1.price;
    // std::cin >> data2.bookNo >> data2.units_sold >> data2.price;

    // data1.revenue = data1.units_sold * data1.price;
    // data2.revenue = data2.units_sold * data2.price;

    // std::cout << data1.bookNo << data1.revenue << std::endl;
    // std::cout << data2.bookNo << data2.revenue << std::endl;

    return 0;
}