#ifndef CP5_ex7_41_h
#define CP5_ex7_41_h

#include <iostream>
#include <string>
using namespace std;

class Sales_data{
    friend istream &read(istream &is, Sales_data &item);
    friend ostream &print(ostream &os, const Sales_data &item);
    friend Sales_data add(const Sales_data &lhs,const Sales_data &rhs);

public:
    Sales_data(const string &s,unsigned n, double p): bookNo(s), units_sold(n),revenue(n*p)
    {
        cout << "Sales_data(const string &, unsigned, double)"
            <<endl;
    }

    Sales_data() : Sales_data("",0,0.0f)
    {
        cout << "Sales_data()"<<endl;

    }
    Sales_data(const string &s): Sales_data(s,0,0.0f)
    {
        cout << "Sales_data(const string &)" << endl;
    }
    Sales_data(istream &is);

    string isbn() const {return bookNo; }
    Sales_data &combine(const Sales_data &);
private:
    inline double avg_price() const ;


private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0 ;



};

inline double Sales_data::avg_price() const
{
    return units_sold ? revenue/units_sold : 0;
}

//declaration for nonmember

istream &read(istream &is, Sales_data &item);
ostream &print(ostream &os, const Sales_data &item);
Sales_data add(const Sales_data &lhs,const Sales_data &rhs);


// constructor
Sales_data::Sales_data(std::istream &is) : Sales_data()
{
    std::cout << "Sales_data(istream &is)" << std::endl;
    read(is, *this);
}

// member functions.
Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

// friend functions
std::istream& read(std::istream& is, Sales_data& item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream& print(std::ostream& os, const Sales_data& item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}




#endif // CP5_ex7_41_h
