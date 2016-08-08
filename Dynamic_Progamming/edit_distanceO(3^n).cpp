#include<bits/stdc++.h>
using namespace std;
int min(int x, int y, int z)
{
   return ((x>y)>z?((x>y)?x:y):z);
}

int des(string x,string y,int m,int n)
{
    if(m==0)return n;
    if(n==0)return m;
    if(x[m-1]==y[n-1])
        return des(x,y,m-1,n-1);
    return 1+min(des(x,y,m,n-1),
                 des(x,y,m-1,n),
                 des(x,y,m-1,n-1)
                 );
}
int main()
{
    string x="sunday";
    string y="saturday";
   cout<<"minimum distance is="<<des(x,y,x.length(),y.length());
    return 0;
}
