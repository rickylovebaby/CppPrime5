#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    vector<int> vec = {1,2,3,4,5,6,7,8,9,0};
    list<int> lst;
    copy(vec.begin()+2,vec.begin()+7,front_inserter(lst));
    for(auto l : lst)
        cout << l << " ";
    cout << endl;



}
