#include <iostream>
#include <vector>
using namespace std;
using Iter = vector<int>::iterator;

void recursive_print(Iter beg,Iter end)

{
    if(beg != end)
    {
        cout << *beg << " ";
        recursive_print(next(beg),end);

    }

}

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9};
    recursive_print(vec.begin(),vec.end());
    return 0;

}
