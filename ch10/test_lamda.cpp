#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    size_t v1 = 42;
    auto f2 = [v1]() mutable {return ++v1;};
    v1 = 0;

    auto j = f2();

    cout << j << endl;

    return 0;

}
