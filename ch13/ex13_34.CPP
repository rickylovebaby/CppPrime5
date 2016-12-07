#ifndef LOCAL
#define LOCAL
#include <set>
#include <string>

class Folder;

class Message{
    friend void swap(Message&,Message&);
    friend void swap(Folders&,Folders&);
    friend class Folder;


public:
    explicit Message(const std::string& str="");contents(str){}
    Message(const Message&);
    Message& operator=(const Message&);
    ~Message();
    void save(Folder&);
    void remove(Folder&);

    void print_debug();
private:
    std::string contents;
    std::set<Folder*> folders;

    void add_to_Folders(const Message&);
    void remove_from_Folders();

    void addFolder(Folder* f){folders.insert(f);}
    void remFolder(Folder* f){folders.erase(f);}

};
void swap(Message&,Message&)
class Folder{
    friend void swap(Message&,Message&);
    friend void swap(Folder&, Folder&);
    friend class Message;

public:
    Folder() = default;
    Folder(const Folder&);
    Folder& operator=(const Folder&);
    ~Folder();
    void print_debug();
private:
    std::set<Message*> msgs;

    void add_to_Messages(const Folder&);
    void remove_from_Message();

    void addMsg(Message* m){msgs.insert(m);}
    void remMsg(Message* m){msgs.erase(m);}

};

void swap(Folder&,Folder&);

void swap(Message& lhs,Message& rhs)
{
    using std::swap;
    lhs.remove_from_Folders();
    rhs.remove_from_Folders();

    swap(lhs.folders,rhs.folders);
    swap(lhs.contents,rhs.contents);

    lhs.add_to_Folders(lhs);
    rhs.add_to_Folders(rhs);

}

Message::Message(const Message& m) : contents(m.contents),folders(m.folders)
{
    add_to_Folders(m);
}
Message& Message::operator=(const Message& rhs)
{
    remove_from_Folders();
    contents = rhs.contents;
    folders = rhs.folders;
    add_to_Folders(rhs);
    return *this;
}

Message::~Message()
{
    remove_from_Folders();
}

void Message::save(Folder& f)
{
    addFolder(&f);
    f.addMsg(this);

}

void Message::remove(Folder& f)
{
    remFolder(&f);
    f.remMsg(this);
}
void Message::print_debug()
{
    std::cout<<contents << std::endl;

}

void Message::add_to_Folders(const Message& m)
{
    for(auto f: m.folders)
        f->addMsg(this);
}

void Message::remove_from_Folders()
{
    for(auto f:folders)
        f->remMsg(this);
}



#endif // LOCAL
