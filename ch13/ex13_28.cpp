#include <iostream>
#include <string>


class TreeNode{
public:
    TreeNode() : value(std::string()),count(new int(1)),left(nullptr),right(nullptr){}
    TreeNode(const TreeNode& tn) : value(tn.value),count(tn.count),left(tn.left),right(tn.right){++*count;}
    TreeNode& operator=(const TreeNode &rhs);
    ~TreeNode()
    {
        if(--*count == 0)
        {
            if(left)
            {
                delete left;
                left = nullptr;
            }
            if(right)
            {
                delete right;
                right = nullptr;
            }
            delete count;
            count = nullptr;

        }
    }
private:
    std::string value;
    int count;
    TreeNode* left;
    TreeNode* right;


};
