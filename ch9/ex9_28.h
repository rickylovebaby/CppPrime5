
void findlist(forward_list<string> sf,string s1,string s2)
{

    auto prev = sf.before_begin();

    for(auto curr  = sf.begin();curr != sf.end();prev = curr++)
    {
        if(*curr == s1)
        {
            sf.insert_after(curr,s2);
            return;
        }

    }
    sf.insert_after(prev,s2);


}
