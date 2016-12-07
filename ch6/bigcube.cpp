#include <iostream>
#include <map>

#include <vector>
#include <string>
#include <iterator>

using namespace std;

map<string,int> BigCubePV;
queue<int> SmallCubeValue;
vector<int> vec;


int main()
{
    int x,y,z,M,P;
    string pos;

    for(z = 0;z <= M; ++z)
    {
        for(y = 0; y <= M; ++y)
        {
            for(x = 0;x <= M; ++x)
            {
                pos = "zyx";
                BigCubePV[pos] = value ; //按照顺序填入；

            }
        }


    }


    long int slen=L[i]*L[i]*L[i];
    int val,N;

    //将小立方的每一个数值都放进单独的vector中，再与大立方中取出来的数字做匹配；



    //将小立方里的数值与对应的小立方的值进行匹配

    for(int m=0;m<slen;++m)
    {

        vecSmall.push_back(val);

    }


    //将每一个小立方对应的大立方的位置的值全部压到一个vector里


    long int veclen=(M-L[i]+1)* (M-L[i]+1)*(M-L[i]+1);//所有小立方可能出现的位置总数


    vector<vector<int>> vecBig;
    vector<int> vecSmall;

    for(int n=0;n < veclen;++n )
    {

        for(int j = 0;j <= M - L[i];++j )
        {
            for(z = j;z <= M-L[i]+j; ++z)
            {

                for(y =j ; y <= M-L[i]+j; ++y)
                {
                    for(x =j ;x <= M-L[i]+j ; ++x)
                    {
                        corePos = "zyx";
                        //小立方对应到大立方位置的按照顺序排列的值；

                        vecBig[n].push_back(BigCubePV[corePos]);


                    }
                }


            }

        }





    }

    for(int n=0;n < veclen;++n )
    {
        auto beginSmall = vecSmall.begin();
        auto beginBig = vecBig[n].begin();
        auto endSmall = vecSmall.end();
        auto endBig = vecBig[n].end();
        for(;((*beginSmall+(*beginBig))) % P == 0 ;++beginBig,++beginSmall)
        {

            while(beginBig =endBig)
            {
                //说明小立方正好可以放在这个位置，而且所有值MOD P后等于0；
                cout << <<endl;//输出小立方体对应的位置信息，正好对应这输出

            }


        }






    }















}
