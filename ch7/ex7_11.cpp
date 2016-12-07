#include "ex7_11.h"
using namespace std;

int main()
{
    Sales_data item1;
    print(cout,item1) <<endl;

    Sales_data item2("0-201-78354-X");
    print(cout,item2) <<endl;

    Sales_data item3("0-201-78354-X",3,20.00);
    print(cout,item3) <<endl;

    Sales_data item4(cin);
    print(cout,item4)<<endl;


    return 0;


}
