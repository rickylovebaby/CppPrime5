#include <iostream>
#include <iterator>
using namespace std;

int main()
{
    int ia[10]={0,1,2,3,4,5,6,7,8,9};

    int *e = end(ia);
    for(int *b = begin(ia); b != e; ++ b)
    {
        *b = 0;
    }
    for(auto i : ia)
        cout << i << " ";
    cout << endl;


}
