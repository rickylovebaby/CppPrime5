
#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
using namespace std::placeholders;

bool isSmallthan6(const string &s,string::size_type sz)
{
    return s.size() <= sz;

}
int main()
{
    vector<string> authors{"Mooophy", "pezy", "Queequeg90", "shbling",
                                "evan617"};
    cout << count_if(authors.cbegin(),authors.cend(),bind(isSmallthan6,_1,6));

}
