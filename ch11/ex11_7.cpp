#include <map>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    map<string,vector<string>> family_name;
    string lastName,childName;
    while([&]() -> bool {cout << "Please enter last name:\n";
                return cin >> lastName && lastName !="@q";}())//此处大括号后的圆括号不可省略，省略即不能编译，原因是lamda返回的是一个函数指针，要是想要使用它，必须使用调用说明符
    {
        cout << "PLZ enter children name:\n";
        while(cin >> childName && childName != "@q")
        {
            family_name[lastName].push_back(childName);
        }
    }
    for(auto f: family_name){
        cout<< f.first <<"\n";

        for(auto c : f.second)
            cout << c << " ";
        cout << endl;
    }




    return 0;





}
