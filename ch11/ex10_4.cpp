#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstdio>
using namespace std;

int main()
{
    #ifndef LOCAL
    freopen("data1.txt","r",stdin);
    #endif // LOCAL

    map<string,size_t> word_count;
    string word;
    while(cin >> word)
    {
        for(auto &ch : word)
            ch = tolower(ch);
        word.erase(remove_if(word.begin(),word.end(),ispunct),
                   word.end());
        ++word_count[word];
    }
    for(const auto &w : word_count)
        cout << w.first << " occurs : "<<w.second<<"\n";

    return 0;

}
