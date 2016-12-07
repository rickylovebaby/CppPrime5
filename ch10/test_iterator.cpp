#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;

    istream_iterator<int> in_iter(cin);
    istream_iterator<int> eof;
    while(in_iter != eof)
        vec.push_back(*in_iter++);

    for(auto v : vec)
        cout << v << " ";
    cout << endl;



}
