template <typename T>
class QueuesUsingArray {
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int maxSize;

    public:
    QueuesUsingArray(int s){
        data = new T[s];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        maxSize = s;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size==0;
    }

    void enqueue(T el){
        if(nextIndex == maxSize){
            cout<<"Queue is full :( "<<endl;
            return;
        }
        data[nextIndex] = el;
        nextIndex++;
        if(firstIndex==-1) firstIndex = 0;
        size++;
    }

    T dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty : "<<endl;
            return 0;
        }
        size--;
        if(isEmpty()){
            T last = data[firstIndex];
            firstIndex = -1;
            return last;
        }
        return data[firstIndex++];
    }

    T front(){
        if(firstIndex==-1) return 0;
        return data[firstIndex];
    }

    T rear(){
        return data[nextIndex-1];
    }
};