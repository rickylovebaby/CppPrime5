

vector<int>::iterator beg;
vector<int>::iterator end;

bool FindInVec(beg,end,int value)
{
    while(beg != end)
    {
        if((*beg++) == value)
            return true;
    }
    return false;



}



vector<int>::iterator FindVec(beg,end,int value)
{
    for(auto iter = beg; iter != end; ++iter)
    {
        if(*iter == value) return iter;
    }
    return end;

}
