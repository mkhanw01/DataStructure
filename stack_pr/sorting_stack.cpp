#include<stdio.h>
#include<stack>
using namespace std;
stack<int>s;
int instack(stack<int>s,int temp)
{
    if(s.empty()||temp>s.top())
    {
        s.push(temp);
        return;
    }
    else
    int x=s.pop();
    instack(s,temp);
    push(x);
}
int sortstack(stack<int> s)
{
    int temp;
    if(!s.empty())
    {
        temp=pop();
        sortstack(s);
        instack(s,temp);
    }
}
int main()
{
    s.push(30);
    s.push(-5);
    s.push(18);
    s.push(14);
    s.push(-3);
    sortstack(s);
    return 0;
}
