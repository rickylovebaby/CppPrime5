#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec{1,2,3,4,5,6,7,8,9};
    auto tmp = vec.back();
    cout << tmp << endl;



    cout <<"*********"<<endl;
    vec.pop_back();

    for(auto v : vec)
        cout << v <<endl;



    return 0;

}
