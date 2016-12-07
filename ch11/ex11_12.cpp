#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    #ifndef LOCAL
    freopen("data2.txt","r",stdin);
    #endif // LOCAL
    vector<pair<string,int>> pvec;
    string str;
    int val;
    pair<string,int> psi;
    while(cin >> str >> val)
    {
        //psi=make_pair(str,val);
        //pvec.push_back(psi);
        pvec.push_back({str,val});
        //pvec.empalce_back(str,i);
    }
    for(auto p :pvec)
    {

            cout <<"string is: "<< p.first << "\nthe value is: "<< p.second<<endl;

    }
    return 0;



}
