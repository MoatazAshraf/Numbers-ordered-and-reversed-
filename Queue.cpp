#include "Queue.h"

Queue::Queue()
{
    rear=-1;
    Front=0;
    Count=0;

}
void Queue::enQueue(int f)
{
    Count++;
    rear=(rear+1)%SIZE;
    arr[rear]=f;
}
int Queue::deQueue()
{
    int y=arr[Front];
    Front=(Front+1)%SIZE;
    Count--;
    return y;
}
bool Queue::isEmpty()
{
    if (Count==0)
        return true;
    else
        return false;
}

