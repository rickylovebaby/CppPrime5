#include <iostream>
#include <list>
#include <vector>
#include <string>
using namespace std;

int main()
{
    list<const char*> clis{"Mooophy", "pezy", "Queeuqueg"};
    vector<string> svec;

    svec.assign(clis.cbegin(),clis.cend());

    for(const auto &ch : svec)
        cout << ch <<endl;

    return 0;



}
