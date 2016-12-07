#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void ReadFileToVec(const string &fileName,vector<string> &vec)
{
    ifstream ifs(fileName);
    if(ifs)
    {
        string buf;
        while(ifs >> buf)
            vec.push_back(buf);
    }
}

int main()
{
    vector<string> vec;
    ReadFileToVec("./data.in",vec);
    for(const auto &str : vec)
        cout << str <<endl;
    return 0;


}
