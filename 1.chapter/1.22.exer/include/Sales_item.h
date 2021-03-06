#ifndef SALES_ITEM_H
#define SALES_ITEM_H


#include <iostream>
#include <string>

class Sales_item
{
private:
    std::string bookNo;
    unsigned units_sold;
    double revenue;
public:
    Sales_item(): units_sold(0), revenue(0.0) { }
    Sales_item(const std::string &book):
        bookNo(book), units_sold(0), revenue(0.0) { }
    Sales_item(std::istream &is) { is >> *this; }

    Sales_item operator+=(const Sales_item& rhs);
    std::string isbn() const { return bookNo; }
    double avg_price() const;
private:
    friend std::istream& operator>>(std::istream&, Sales_item&);
    friend std::ostream& operator<<(std::ostream&, const Sales_item&);
};

double Sales_item::avg_price() const
{
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

std::istream& operator>>(std::istream& in, Sales_item& s)
{
    double price;
    in >> s.bookNo >> s.units_sold >> price;
    if (in)
        s.revenue = s.units_sold * price;
    else
        s = Sales_item();

    return in;
}

std::ostream& operator<<(std::ostream& out, const Sales_item& s)
{
    out << s.isbn() << " " << s.units_sold << " "
        << s.revenue << " " << s.avg_price();
    return out;
}

Sales_item Sales_item::operator+=(const Sales_item& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_item operator+(const Sales_item& lhs, const Sales_item& rhs)
{
    Sales_item ret(lhs);
    ret += rhs;
    return ret;
}
#endif
