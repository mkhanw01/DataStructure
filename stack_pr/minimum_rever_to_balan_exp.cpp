#include<bits/stdc++.h>
using namespace std;
int reve(string ex)
{
    int len=ex.length();
    if(len%2)
        return -1;
    stack<char>s;
    for(int i=0;i<len;i++)
    {
        if(ex[i]=='}' && !s.empty())
        {
            if(s.top()=='{')
                 s.pop();
            else
                 s.push(ex[i]);
        }
        else
            s.push(ex[i]);
    }
  int relen=s.size();
  int n=0;
  while(!s.empty()&& s.top()=='}')
  {
      s.pop();
      n++;
  }
  return (ceil((relen-n)/2)+ceil(n/2));
  //return (relen/2+n%2);

}
int main()
{
 string expr="}}{{";
 cout<<reve(expr);
 return 0;
}
