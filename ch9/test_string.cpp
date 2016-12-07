
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s = "some string",s2 = "some other string";
    s.insert(0,s2);
    cout << s <<endl;
//    return 0;
    const char *cp ="stately,plump buck";
    s.assign(cp,7);
    cout << s <<endl;
    l
    s.insert(s.size(),cp+7);
    cout << s <<endl;


}
