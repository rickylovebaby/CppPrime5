#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int val;
    vector<int> ivec;
    while(cin >> val)
        ivec.push_back(val);
    int sum = accumulate(ivec.cbegin(),ivec.cend(),0);
    cout <<"the sum of elements in vector<int> is: "
        << sum << endl;

    return 0;


}
