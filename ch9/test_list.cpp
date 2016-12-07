#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<string> svec{"world"};
    svec.insert(svec.begin(),"hello");
    for(auto s : svec)
        cout << s<< " ";
    cout << endl;

    return 0;
}
