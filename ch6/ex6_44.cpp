#include <iostream>
#include <string>
using namespace std;

inline
bool isShorter(const string &s1, const string &s2)
{



    return s1.size() < s2.size();
}

int main()
{
    string str1,str2;
    while(cin >> str1 >> str2)
   


  	   if(isShorter(str1,str2))
            cout << str1 << " " <<str2 << endl;
    return 0;



}
