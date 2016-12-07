#include <iostream>
#include <string>
using namespace std;

void swap(int &v1,int &v2)
{
    if(v1 == v2)
        return ;
    int tmp  = v1;
    v1 = v2;
    v2 = tmp;


}

string make_plural(size_t ctr,const string &word,const string &ending)
{
    return (ctr > 1) ? word+ending : word;

}
int main()
{
    int a,b;
    while(cin >> a >> b)
    {
        swap(a,b);
        cout << a << " " << b <<endl;
    }
    return 0;





}
