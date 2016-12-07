#include <iostream>

using namespace std;
class numberd{
public:
    numberd(const numberd& n)
    {
        mysn = n.mysn+1;

    }

    numberd()
    {
        static int unique = 10;
        mysn = unique++;

    }
    int mysn;

};
void f(numberd s)
{
    cout << s.mysn << endl;

}


int main()
{
    numberd a,b=a,c= b;
    f(a);
    f(b);
    f(c);


}
