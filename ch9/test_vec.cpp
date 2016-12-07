#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
    list<string> slis{"WORLD"};
    slis.insert(slis.begin(),"hello");
    for(auto c : slis)
        cout << c << " ";
    cout << endl;

    return 0;
}
