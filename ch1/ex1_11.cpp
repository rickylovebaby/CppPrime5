#include <iostream>
using namespace std;

int main()
{

    int v1,v2;
    int temp;
    cout << "enter two value" << endl;
    cin >> v1 >> v2;
    if(v1 > v2)
    {
        temp = v1;
        v1=v2;
        v2=temp;
    }
    while(v1 != v2)
    {
        cout << (++v1) << endl;

    }
    return 0;

}
