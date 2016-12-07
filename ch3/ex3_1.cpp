#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    #ifndef LOCAL
    freopen("data.txt","r",stdin);
    #endif // LOCAL
    string word;
    while(getline(cin,word))
        cout << word << endl;
    return 0;

}


