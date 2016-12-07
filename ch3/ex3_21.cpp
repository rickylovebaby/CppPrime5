#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int var;
    vector<int> vec(10);
    for(int i =0 ; i < 10 && (cin >> var);++i)
        vec[i] = var;
    for(vector<int>::iterator it = vec.begin();it != vec.end();++it)
    {
        *it = (*it)*2;

    }

    for(auto c : vec)
        cout << c << " ";
    cout << endl;








}
