#include <iostream>
#include <algorithm>
#include <string>
#include <list>

using namespace std;

int main()
{
    vector<int> ivec = {1,2,3,4,5,6,7,8,9,3,32,4,2,6,7,4,6,8,9,6,54,4,6,4,2,3,45,6,7,8};
    int val = 4;

    auto cnt = count(ivec.begin(),ivec.end(),val);

    cout << "the number of 4 is: "
        << cnt << endl;


    list<string> slist = {"aa","aaa","aa","cc"};
    auto cnt1 = count(slist.cbegin(),slist.cend(),"aa");

    cout << "the number of aa is: "
        << cnt1 << endl;


}
