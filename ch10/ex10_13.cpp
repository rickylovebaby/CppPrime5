

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool func(const string &words)
{
    return words.size() >= 5 ;

}
int main()
{
    auto v = std::vector<std::string>{"a",         "as",        "aasss",
                                      "aaaaassaa", "aaaaaabba", "aaa"};
    auto pivot = partition(v.begin(),v.end(),func);

    for(auto it = v.cbegin();it != pivot; ++it)
        cout <<*it<<" ";
    cout << endl;



    return 0;




}
