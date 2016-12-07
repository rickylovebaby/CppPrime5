
#include <iostream>
#include <deque>
#include <string>
using namespace std;

deque<string>::iterator iter;
int main()
{
    string word;
    deque<string> sdeq;
    while(cin >> word)
        sdeq.push_front(word);
    for(iter = sdeq.begin(); iter != sdeq.end();++iter)
        cout << *iter << " ";
    cout << endl;

    return 0;


}
