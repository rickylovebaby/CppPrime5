#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string word;
    vector<string> vec;


    while(cin >> word){
        vec.push_back(word);
    }
    for(auto &s : vec ){
        for(auto &c : s)
        {
            c = toupper(c);
        }
        cout << s << endl;
    }



    return 0;





}

