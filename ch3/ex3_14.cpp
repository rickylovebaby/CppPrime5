#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i;
    vector<int> vec;
    while(cin >> i){
        vec.push_back(i);
    }
    for(auto m : vec)
        cout << m << endl;
    return 0;


}
