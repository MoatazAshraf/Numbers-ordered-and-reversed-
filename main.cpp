#include "Stack.cpp"
#include"Queue.cpp"
#include <iostream>
int inversequeue (int );
using namespace std;
int main()
{
    int y;
    inversequeue(y);
    return 0;
}
int inversequeue(int x)
{
    Stack S;
    Queue Q1;
    Queue Q2;
    int L;
    cout<<"Enter the length of the queues please "<<endl;
    cin>>L;
    int elements[L];
    cout<<"Enter elements please "<<endl;
    for (int i=0 ; i<L ; i++)
    {
        cin>>x;
        elements[i]=x;
        Q1.enQueue(x);
        S.push(Q1.deQueue());
    }
    cout<<"Elements you entered showed in the first queue (before reversed) are "<<endl;
    for (int i=0 ; i<L; i++)
    {
        cout<<elements[i]<<" ";
    }
    cout<<endl;
    for (int i=0 ; i<L ; i++)
    {
        Q2.enQueue(S.pop());
    }
    cout<<"Elements you entered showed in the second queue (after reversed) are "<<endl;
    for (int i=0 ; i<L ; i++)
    {
        cout<<Q2.deQueue()<<" ";
    }
    cout<<endl;
}
