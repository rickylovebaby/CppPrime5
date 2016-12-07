
#ifndef LOCAL

#define LOCAL
class HasPtr{
public:
    friend void swap(HasPtr&,HasPtr&);
    HasPtr(const std::string& s = std::string()):ps(new std::string(s)),i(0){}
    HasPtr(const HasPtr& hp):ps(new std::string(*hp.ps)),i(hp.i){}
    HasPtr& operator=(const HasPtr& hp)
    {
        auto newp = new std::string(*hp.ps);
        delete ps;
        ps= newp;
        i = hp.i;
        return *this;

    }
    ~HasPtr() {delete ps;}
    void show() {std::cout << *ps <<std::endl;}
private:
    std::string *ps;
    int i;


};

void swap(HasPtr& lhs,HasPtr& rhs)
{
    using std::swap;
    swap(lhs.ps,rhs.ps);
    swap(lhs.i,rhs.i);
    std::cout<< "call swap(HasPtr& lhs,HasPtr& rhs)"<<std::endl;
}


#endif // LOCAL
