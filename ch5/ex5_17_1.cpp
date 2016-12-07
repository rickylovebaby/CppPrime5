#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1{0,1,2,3};
    vector<int> vec2{0,1,2,3,4,5,6,7};
    auto size = vec1.size() < vec2.size() ? vec1.size() : vec2.size();
    for(decltype(vec1.size()) i=0; i != size ; )
    {
        if(vec1[i] == vec2[i])
        {
            ++i;
        }


        else{
            cout << "false" << endl;
            return 0;
        }

    }
    cout << "true"<< endl;
    return 0;






}
