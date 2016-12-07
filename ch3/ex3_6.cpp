#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("hello world!!it is sad!");
    for(char &c : s)
    {
        if(ispunct(c)){
                c = ' ';
        }
    }
    cout << s << endl;

}
