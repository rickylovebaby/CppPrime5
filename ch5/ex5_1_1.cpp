#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
        unsigned aCnt = 0,eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    #ifndef LOCAL
    freopen("data1.in","r",stdin);

    #endif // LOCAL
    while(cin >> ch)
    {
       if( ch == 'a' || ch == 'A')
           ++aCnt;
        else if(ch == 'e' || ch == 'E')
            ++eCnt;
        else if(ch == 'i' || ch == 'I')

            ++iCnt;
        else if(ch == 'o' || ch == 'O')
            ++oCnt;
        else if(ch == 'u' || ch == 'U')
            ++uCnt;


    }
    cout    << "Number of vowel a: \t" << aCnt << '\n'
            << "Number of vowel e: \t" << eCnt << '\n'
            << "Number of vowel i: \t" << iCnt << '\n'
            << "Number of vowel o: \t" << oCnt << '\n'
            << "Number of vowel u: \t" << uCnt << endl;

    return 0;
}
