#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<char> cvec = {'a','b','c','d','e','f','g','h','i'};
    string str(cvec.begin(),cvec.begin()+5);

    cout << str << endl;

}
