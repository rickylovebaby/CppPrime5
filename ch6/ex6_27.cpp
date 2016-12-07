#include <iostream>
#include <initializer_list>
using namespace std;

int sum_list(initializer_list<int> i1)
{
     int sum = 0;
    for(auto beg =i1.begin(); beg != i1.end();++beg )
        sum += (*beg);
    return sum;

}
int sum(initializer_list<int> i1)
{
    int sum = 0;
    for(auto i : i1) sum += i;
    return sum;

}

int main(void)
{
    cout << sum({1,2,3,4,5}) << endl;
    cout << sum_list({1,2,3,4,5})<<endl;

    return 0;

}
