#include <iostream>
#include <list>
#include <deque>
using namespace std;

deque<int> odd;
deque<int> even;
list<int> ilis;
int main()
{
    int val;
    while(cin >> val)
        ilis.push_back(val);
//    for(auto v : ilis)
//    {
//        if(v % 2)
//            odd.push_back(v);
//        else
//            even.push_back(v);
//    }

    for(auto i : ilis)
//        (i & 0x1 ? odd : even).push_back(i);

    cout<<"All odd numbers is here: " <<endl;
    for(auto o : odd)
        cout << o <<" ";
    cout << endl;
    cout<<"All even numbers is here: " <<endl;
    for(auto e : even)
        cout << e << " ";
    cout << endl;




    return 0;


}
