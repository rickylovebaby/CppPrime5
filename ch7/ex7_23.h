#ifndef CP5_ex7_23_h
#define CP5_ex7_23_h

#include <iostream>
#include <string>
using namespace std;

class Screen{
    using pos = string::size_type;

    Screen() = default;
    Screen(pos ht,pos wd, char c) : height(ht),width(wd),content(ht * wd,c)
    {


    }
    char get() const {return contents[cursor];}
    char get(pos r,pos c) const {return contents[r*width+c];}

private:
    pos cursor = 0;
    pos height = 0, width =0;
    string contents;


};




#endif // CP5_ex7_23_h
