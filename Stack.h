#ifndef STACK_H
#define STACK_H
const int Max=100;
class Stack
{
public:
    Stack();
    void push(int);
    int pop();
    bool isStackEmpty();
    bool isStackFull();

private:
    int top;
    int elements[Max];
};

#endif // STACK_H
