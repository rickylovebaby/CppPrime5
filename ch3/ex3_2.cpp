#include <iostream>
#include <cctype>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string s("hello world !!!!");
    string::size_type punct_cnt = 0;
    for(auto c : s)
        if(ispunct(c)){
            ++punct_cnt;
        }
    cout << punct_cnt << "in" << s << endl;

    for(auto &c : s)
        c = toupper(c);
    cout << s << endl;


    string s1("some string");
    stringstream ss(s1);
    string words;
    while (ss >> words)
    if(!words.empty()){
        words[0] = toupper(words[0]);
    }
    cout << s1 << endl;

    string s2("some string");

    for(decltype(s2.size()) index = 0;index != s2.size() && !isspace(s2[index]);++index)
        s2[index] = toupper(s2[index]);
    cout << s2 << endl;


    return 0;
}
