#include <iostream>
#include <string>
using namespace std;
int main()
{
    string buf;
    int count  = 0;
    while(cin >> buf && !buf.empty())
    {
        if(buf[0] != '_')
            continue;

        ++count;

    }

    cout << count << endl;
    return 0;




}
