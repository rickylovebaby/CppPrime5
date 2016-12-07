#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ivec;
    cout << "ivec size is : "<< ivec.size()
        <<"ivec capacity is: " << ivec.capacity() << endl;
    for(auto ix = 0; ix != 24;++ix)
        ivec.push_back(ix);
    cout << "ivec size is : "<< ivec.size()
        <<"ivec capacity is: " << ivec.capacity() << endl;

    ivec.reserve(50);
    cout << "ivec size is : "<< ivec.size()
        <<"ivec capacity is: " << ivec.capacity() << endl;


    while(ivec.size() != ivec.capacity())
        ivec.push_back(0);
    cout << "ivec size is : "<< ivec.size()
        <<"ivec capacity is: " << ivec.capacity() << endl;

    ivec.push_back(42);
     cout << "ivec size is : "<< ivec.size()
        <<"ivec capacity is: " << ivec.capacity() << endl;


    ivec.shrink_to_fit();
     cout << "ivec size is : "<< ivec.size()
        <<"ivec capacity is: " << ivec.capacity() << endl;


    return 0;

}
