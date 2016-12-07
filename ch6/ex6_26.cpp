#include <iostream>
#include <string>
#include <initializer_list>

using namespace std;


void error_msg(initializer_list<string> i1)

{
    for(auto beg = i1.begin() ; beg != i1.end(); ++beg)
        cout << *beg << " " ;

    cout << endl;


}
int main()
{


}
