#include <vector>
#include <iterator>
#include <iostream>
using namespace std;

int main()
{

    vector<int> ivec = {1,2,3,4,5,6,7,8,9};
    for(auto i : ivec)
        cout << i << " ";
    cout << endl;

    for(auto r_iter = ivec.end(); r_iter != ivec.begin();)
        cout << *(--r_iter)<<" ";
    cout << endl;

    return 0;



}
