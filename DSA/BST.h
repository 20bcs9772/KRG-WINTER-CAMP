template<typename T>
class BST {
    public:
    T data;
    BST<T> *left,*right;
    BST(T data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};