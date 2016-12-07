#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec(20);
    fill_n(vec.begin(),vec.size(),0);
    for(auto c : vec)
        cout << c << " ";
    cout << endl;


}
