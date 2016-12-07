#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> svec;
    string word;
    while(cin >> word)
    {
        svec.push_back(word);
        cout<<svec.capacity()<<endl;
    }
    return 0;

}
