
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string s("hello world!!it is sad!");


        for (auto i : s)
            if (!ispunct(i)) cout << i;
        cout << endl;


    return 0;
}
