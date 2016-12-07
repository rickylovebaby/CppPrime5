#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> svec;
    cout << svec[0]<<endl;
    cout << "------------"<<endl;
    cout << svec.at(0)<<endl;
    cout << "------------"<<endl;
    cout << svec.front()<<endl;
    cout << "------------"<<endl;
    cout << *svec.begin()<<endl;

    return 0;


}
