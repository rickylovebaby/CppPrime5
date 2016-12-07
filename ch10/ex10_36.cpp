#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    list<int> lst = {1,2,3,4,5,6,7,8,9,0,2,3,5,0,4,32,0,1,2};
    auto r_zero = find(lst.crbegin(),lst.crend(),'0');
    auto zero = r_zero.base();
    cout <<<<endl;

    return 0;

}
