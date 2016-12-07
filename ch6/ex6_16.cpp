#include <iostream>
#include <string>

using namespace std;

bool has_upper(const string &s)
{
    int cnt =0 ;
    for(auto i = 0;i < s.size();++i)
        if(s[i] >= 'a' && s[i] <= 'z')
            ++cnt;
    return cnt;
}
void change_to_lower(string &s)
{
    for(auto &c : s)
        if(isupper(c)) c=tolower(c);
}


int main()
{
    string str;
    while(cin >> str)
    {
        if(has_upper(str))
        {
            cout << str << "  has upper word"<<endl;
            change_to_lower(str);
            cout <<str<< endl;
        }
        else{
            cout << str << "  has not upper word" << endl;
        }



    }
    return 0;

}
