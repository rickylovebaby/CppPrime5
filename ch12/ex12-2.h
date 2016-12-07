
#include <string>
#include <initializer_list>
#include <memory>
#include <vector>
#include <exception>
using namespace std;

class StrBlob
{
public:
    using size_type = vector<string>::size_type;

    StrBlob() : data(make_shared<vector<string>>()){}
    StrBlob(initializer_list<string> il) : data(make_shared<vector<string>> (il))
    {

    }
    size_type size() const {return data->size();}
    bool empty() const {return data->empty();}
    void push_back(const string &t) {data->push_back(t);}
    void pop_back()
    {
        check(0,"pop_back on empty StrBlob");
        data->pop_back();
    }

    string &front()
    {
        check(0,"front on empty StrBlob");
        return data->front();

    }
    string &back()
    {
        check(0,"back on empty StrBlob");
        return data->back();

    }
    const std::string& front() const
    {
        check(0, "front on empty StrBlob");
        return data->front();
    }
    const std::string& back() const
    {
        check(0, "back on empty StrBlob");
        return data->back();
    }
private:
    void check(size_type i,const string &msg) const
    {
        if(i >= data->size())
            throw out_of_range(msg);

     }
private:
    shared_ptr<vector<string>> data;




};
