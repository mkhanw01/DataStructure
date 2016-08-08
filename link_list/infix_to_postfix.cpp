#include<stack>
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int Prc(char ch)
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
int isOperand(char ch)
{
    return(ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z');
}
int infixtopostfix(char* exp)
{
    stack<char> s;
    string res;
    int n=strlen(exp);
    for(int i=0;i<n;i++)
    {
        if(isOperand(exp[i]))
            res=res+exp[i];
            else if(exp[i]=='(')
            {
                s.push(exp[i]);
            }
            else if(exp[i]==')')
            {
                while(!s.empty()&&s.top()!='(')
                      res=res+s.top();
                if(!s.empty()&&s.top()!='(')
                    return -1;
                else
                    s.pop();
            }
            else
            {
                while(!s.empty() && Prc(exp[i])<=Prc(s.top()))
                           {
                             res=res+s.top();
                             s.pop();
                           }
            }
                s.push(exp[i]);
    }
    while(!s.empty())
      {
         res=res+s.top();
         s.pop();
    }

     string::iterator it;
     for(it=res.begin();it!=res.end();it++)
        cout<<*it;
}
int main()
{
  char expr[]="a+b*(c^d-e)^(f+g*h)-i";
  infixtopostfix(expr);
  return 0;
}
