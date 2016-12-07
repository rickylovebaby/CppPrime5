#ifndef CP5_ex7_27_h
#define CP5_ex7_27_h
#include <string>
#include <iostream>
using namespace std;

class Screen{

public:
    using pos = string::size_type;

    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {} // 2
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c)
    {

    } // 3

    char get() const {return contents[cursor];}
    char get(pos r,pos c) const { return contents[r*width + c] ;}
    inline Screen &move(pos r,pos c);
    inline Screen &set(char c);
    inline Screen &set(pos r, pos c, char ch);

    const Screen &display(ostream &os) const
    {
        do_display(os);
        return *this;
    }
    Screen &display(ostream &os)
    {
        do_display(os);
        return *this;
    }

private:
    void do_display(ostream &os) const { os << contents ;}

private:
    pos cursor = 0;
    pos height = 0, width =0;
    string contents;


};

inline Screen &Screen::move(pos r,pos c)
{
    cursor = r* width + c;
    return *this;
}
inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}
inline Screen &Screen::set(pos r,pos c,char ch)
{
    contents[r*width + c] = ch;
    return *this;

}



#endif // CP5_ex7_27_h
