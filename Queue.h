#ifndef QUEUE_H
#define QUEUE_H

const int SIZE=100;
class Queue
{
public:
    Queue();
    void enQueue(int);
    int deQueue();
    bool isEmpty();
    bool isFull();
private:
    int rear;
    int Front;
    int Count;
    int arr[SIZE];

};

#endif // QUEUE_H
