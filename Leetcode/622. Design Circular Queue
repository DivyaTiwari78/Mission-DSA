#include <vector>
using namespace std;

class MyCircularQueue {
private:
    vector<int> q;
    int head, tail, size, capacity;

public:
    MyCircularQueue(int k) {
        q.resize(k);
        head = 0;
        tail = -1;
        size = 0;
        capacity = k;
    }
    
    bool enQueue(int value) {
        if (isFull()) return false;
        tail = (tail + 1) % capacity;
        q[tail] = value;
        size++;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) return false;
        head = (head + 1) % capacity;
        size--;
        return true;
    }
    
    int Front() {
        if (isEmpty()) return -1;
        return q[head];
    }
    
    int Rear() {
        if (isEmpty()) return -1;
        return q[tail];
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
};
