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
                return cin >> lastName && lastName !="@q";}())//�˴������ź��Բ���Ų���ʡ�ԣ�ʡ�Լ����ܱ��룬ԭ����lamda���ص���һ������ָ�룬Ҫ����Ҫʹ����������ʹ�õ���˵����
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
