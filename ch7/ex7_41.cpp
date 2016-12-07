
#include "ex7_41.h"
using namespace std;

//constructor
Sales_data::Sales_data(istream &is) : Sales_data()
{
    cout << "Sales_data(istream &is)"<<endl;
    read(is,*this);

}
//member function

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

//friend function
Sales_data &read(istream &is,Sales_data &item)
{
    double price = 0;
    is >> item.bookNO >>item.units_sold>>price;
    item.revenue = price * units_sold;
    return is;

}
ostream &print(ostream &os,const Sales_data &item)
{

    os << item.isbn()<<" "<< item.units_sold<<" "<< item.revenue;
    return os;

}
Sales_data add(const Sales_data &lhs,const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;

}

