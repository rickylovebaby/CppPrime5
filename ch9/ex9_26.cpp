#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
    int ia[] = {0,1,1,2,3,4,8,13,21,55,89};
    vector<int> vec(ia,end(ia));
    list<int> lst(vec.begin(),vec.end());

    for(auto it = lst.begin();it != lst.end();)
        if(*it & 0x1)
            it = lst.erase(it);
        else
            ++it;

    for(auto it = vec.begin();it != vec.end();)
        if(*it & 0x1)
            it = vec.erase(it);
        else
            ++it;

    cout << "list: ";
    for(auto i : lst)
        cout << i << " ";
    cout << "\n vector";

    for (auto i : vec) cout << i << " ";
    cout << endl;
    return 0;














}
