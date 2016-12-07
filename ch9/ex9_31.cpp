#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> iflst = {0,1,2,3,4,5,6,7,8,9};
    auto prev = iflst.before_begin();
    auto curr = iflst.begin();
    while(curr != iflst.end())
    {
        if(*curr % 2)
        {
            curr = iflst.insert_after(prev,*curr);
            advance(curr,2);
            advance(prev,2);




        }
        else
            curr = iflst.erase_after(prev);
    }

    for(auto i : iflst)
        cout << i << " ";
    cout << endl;

    return 0;

}
