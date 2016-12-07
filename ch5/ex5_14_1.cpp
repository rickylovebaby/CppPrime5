#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string word,pre_word,max_repeat_word;
    int repeat_couts = 0, max_repeat_counts = 0;
    vector<string> vec;
    while(cin >> word)//每次都是要是
        vec.push_back(word);
    auto beg = vec.begin();
    while(beg != (vec.end()-1))
    {
        if(*beg == *(beg+1))
            ++repeat_couts;
        else
        {
            repeat_couts = 1;
            pre_word = *beg;
        }
        ++beg;
        if (max_repeat_counts < repeat_couts) {
            max_repeat_counts = repeat_couts;
            max_repeat_word = pre_word;
        }

    }
    if (max_repeat_counts <= 1){
        cout << "no word was repeated" << endl;
    } else {
        cout << "the word '" << max_repeat_word << "' occurred " << max_repeat_counts << " times" << endl;
    }
}
