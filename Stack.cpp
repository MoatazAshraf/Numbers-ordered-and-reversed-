#include "Stack.h"

Stack::Stack()
{
    top=-1;

}
void Stack::push(int e)
{
    top++;
    elements[top]=e;
}
int Stack::pop()
{
    int x=elements[top--];
    return x;
}
bool Stack::isStackFull()
{
    if (top==Max-1)
        return true;
    return false;
}
bool Stack::isStackEmpty()
{
    if (top==-1)
        return true;
    return false;
}
