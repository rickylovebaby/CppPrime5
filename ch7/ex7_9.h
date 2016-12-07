#ifndef CP7_9.h
#define CP7_9.h

#include <iostream>
#include <string>
using namespace std;

struct Person{
    const string &getName() const {return name;}
    const string &getAddress() const {return address;}

    string name;
    string address;


};
istream &read(istream &is, Person &person)
{
    is >> person.name >> person.address;
    if(!is) person =Person();// while is is empty, default initializer constructor
    return is;
}
ostream &print(ostream &os, const Person &person)
{
    os << person<< " " << person.address;
    return os;
}

#endif // CP7_9
