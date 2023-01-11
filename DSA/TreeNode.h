#include <vector>
using namespace std;

template <typename T>
class TreeNode
{
    public:

    T data;
    vector<TreeNode <T> *> children;

    TreeNode (){
        this->data = NULL;
    }

    TreeNode (T data){
        this->data = data;
    }

    
};
