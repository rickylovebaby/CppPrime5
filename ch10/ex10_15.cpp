#include <iostream>

using namespace std;
void elimDups(vector<string> &words)
{
    sort(words.begin(),words.end());
    auto end_unique = unique(words.begin(),words.end());
    words.erase(end_unique,words.end());
}
void biggies(vector<string> &word,vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(),words.end(),[](const string &a,const string &b){return a.size() < b.size();});

    auto wc =find_if(words.begin(),words.end(),[sz](const string &a){return a.size() >= sz;});

    auto count = words.end() - wc;
    for_each(wc,words.end(),[](const string &s){cout << s<< " ";});

    cout << endl;


}
void biggies_partition(vector<string> &word,vector<string>::size_type sz)
{
    elimDups(words);
    auto pivot = partition(words.begin(),words.end(),[sz](const string &s){return s.size() >= sz; });
    for(auto it = words.cbegin(); it != pivot;++it)
        cout << *it << " ";
    cout << endl;


}

void biggies(vector<string> &words,vector<string>::size_type sz,ostream &os = cout,char c = ' ')
{
    //
    for_each(words.begin(),words.end(),[&os,c](const string &s){os << s << c ;});

}




