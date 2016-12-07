#include <iostream>
#include <vector>
#include <string>
#include <memory>
using namespace std;

void process(shared_ptr<int> ptr)
{
    cout << "inside the process function: "<<ptr.use_count()<<endl;

}
int main()
{
    shared_ptr<int> p(new int(42));

    process(shared_ptr<int>(p.get()));
    return 0;

}
