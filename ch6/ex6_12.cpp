#include <iostream>
using namespace std;

void swap(int &m,int &n)
{
  int temp = m;
    m = n;
    n = temp;

}
int main()
{
    int a,b;
    while(cin >> a >> b)
    {
        swap(a,b);
        cout << a <<" "<< b << endl;

    }
    return 0;


}
