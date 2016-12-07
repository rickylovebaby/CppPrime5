
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
    for(auto s : svec)
        cout << s << " ";
    cout << endl;


    return 0;



}
