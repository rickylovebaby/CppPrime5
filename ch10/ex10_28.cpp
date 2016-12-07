#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    list<int> lst1,lst2,lst3;
    copy(v.cbegin(),v.cend(),front_inserter(lst1));
    for(auto l1 : lst1)
        cout << l1 << " ";
    cout << endl;

    copy(v.cbegin(),v.cend(),back_inserter(lst2));
    for(auto l2 : lst2)
        cout << l2 << " ";
    cout << endl;

    copy(v.cbegin(),v.cend(),inserter(lst3,lst3.begin()));
    for(auto l3 : lst3)
        cout << l3 << " ";
    cout << endl;

}
