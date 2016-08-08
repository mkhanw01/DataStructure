#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stack
{
    int top;
    unsigned capa;
    int* array;
};
struct stack* createstack(unsigned capa)
{
    struct stack* stack=(struct stack*)malloc(sizeof(struct stack));
    if(!stack)
        return NULL;
    stack->top=-1;
    stack->array=capa;
    stack->array=(int*)malloc(stack->capa*sizeof(int));
    if(!stack->array)
        return NULL;
    return stack;
    int isempty(struct stack* stack)
    {
        return stack->top=-1;
    }
    char peek(struct stack* stack)
    {
        return stack->array[stack->top];
    }
    char pop(struct stack* stack)
    {
        if(!isempty(stack))
            return stack->array[stack->top--];
        return '$';
    }
    void push(struct stack* stack, char op)
    {
        stack->array[++stack->top]=op;
    }

}
int isoperand(char ch)
{
  return (ch>='a'&& ch<='z'||ch>='A'&& ch<='Z');
}
int prec(char ch)
{
    switch(ch)
    {
      case '+':
      case '-':
        return 1;
      case '*':
      case '/':
        return 2;
      case '^':
        return 3;
    }
    return -1;
}
int intopo(char* exp)
{
    int i,k;
    struct stack* stack=createstack(strlen(exp));
    if(!stack)
        return NULL;
    for(i=0,k=-1;exp[i];i++)
    {
        if(isoperand(exp[i]))
            exp[++k]=exp[i];
        else if(exp[i]=='(')
                    push(stack,exp[i]);
        else if(exp[i]==')')
        {
            while(!isempty(stack) && peek(stack)!='(')
                    exp[++k]=pop(stack);
            pop(stack);
        }
        else
        {
            while(!isempty(stack)&& prec(exp[i])<=prec(peek(stack)))
                 exp[++k]=pop(stack);
                 push(stack,exp[i]);
        }
    }
    while(!isempty(stack))
        exp[++k]=pop(stack);
        exp[++k]='\0';
        printf("%s",exp);
}
int main()
{
    char exp="a+b*(c^d-e)^(f+g*h)-i";
    intopo(exp);
    return 0;
}
