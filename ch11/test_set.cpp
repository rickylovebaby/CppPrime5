#include <set>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> ivec={1,3,5,7,9,2,4,6,8,10,1,3,5,7,9};
    set<int> iset(ivec.begin(),ivec.end());
    multiset<int> miset(ivec.begin(),ivec.end());

    for(auto s : iset)
        cout << s << " ";
    cout << endl;

    for(auto m :miset)
        cout << m <<" ";
    cout << endl;


}
