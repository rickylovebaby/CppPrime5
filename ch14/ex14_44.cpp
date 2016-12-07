#include <iostream>
#include <string>
#include <map>
#include <functional>
int add(int i,int j)
{
    return i + j;
}

auto mod = [](int i, int j){return i%j;};


struct div{
    int operator()(int denominator,int divisor)
    {
        return denominator / divisor;
    }
};

std::map<std::string,std::function<int(int,int)>> binops = {
    {
        "+",add
    },
    {
        "-",std::minus<int>()
    },
    {
        "/",div()
    },
    {
        "*",[](int i,int j){return i * j; }
    },
    {
        "%",mod
    }
};

int main()
{

    while(true)
    {
        std::cout << "\nPlz enter : num operator num : \n";
        int n1,n2;
        std::string s;
        std::cin >> n1 >> s >> n2;

        std::cout << binops[s](n1,n2);
    }
    return 0;
}
