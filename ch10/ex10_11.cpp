
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>


using namespace std;

void elimDups(vector<string> &words)
{
    sort(words.begin(),words.end());
    for(auto s : words)
        cout << s << " ";
    cout << endl;

    auto end_unique = unique(words.begin(),words.end());
    words.erase(end_unique,words.end());
    for(auto s : words)
        cout << s << " ";
    cout << endl;

}

bool isShorter(const string &s1,const string &s2)
{
    return s1.size() < s2.size();

}

int main()
{
    #ifndef local
    freopen("data.txt","r",stdin);

    #endif // local
    vector<string> svec;
    string str;
    while(cin >> str)
        svec.push_back(str);

    elimDups(svec);
    stable_sort(svec.begin(),svec.end(),[](const string &a,const string &b){return a.size() < b.size() ;});

    for(const auto &s : svec)
        cout << s << " ";
    cout << endl;


    return 0;



}

