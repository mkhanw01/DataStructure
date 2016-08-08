#include<iostream>
#include<string.h>
using namespace std;
void LCS(char *x,char *y,int m,int n)
{
    l[m+1][n+1];
    int i,j;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==0||j==0)
                l[i][j]=0;
            else if(x[i-1]==y[j-])
                l[i][j]=l[i-1][j-1]+1;
            else
                l[i][j]=max(l[i-1][j],l[i][j-1]);
        }
    }
    int index=l[m][n];
    char l[index+1];
    l[index]='\0';
    int i=m,j=n;
    while(i>0 && j>0)
    {
        if(x[i-1]==y[j-1])
            l[index-1]=x[i-1];
        else
            if(l[i-1][j]>l[i][j-1])
            i--;
        else
            j--;
    }
    cout<<l;
}
int main()
{
    char x[] = "AGGTAB";
  char [] = "GXTXAYB";
  int m=strlen(x);
  int n=strlen(y)
  LCS(x,y,m,n);
  return 0;
}

