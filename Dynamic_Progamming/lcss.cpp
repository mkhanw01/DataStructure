#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int max(int x,int y)
{
    return(x>y?x:y);
}
void LCS(char *x,char *y,int m,int n)
{
  int l[m+1][n+1];
    int i,j;
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0||j==0)
                l[i][j]=0;
            else if(x[i-1]==y[j-1])
                l[i][j]=l[i-1][j-1]+1;
            else
                l[i][j]=max(l[i-1][j],l[i][j-1]);
        }
    }
    cout<<l[m][n];
    int index=l[m][n];
    char lc[index+1];
    lc[index]='\0';
    i=m;
    j=n;
    while(i>0 && j>0)
    {
        if(x[i-1]==y[j-1]){
                  lc[index-1]=x[i-1];
                  i--;
                  j--;
                  index--;
        }

        else
            if(l[i-1][j]>l[i][j-1])
            i--;
        else
            j--;
    }
    cout<<lc;
}
int main()
{
    char x[] = "AGGTAB";
  char y[] = "GXTXAYB";
  int m=strlen(x);
  int n=strlen(y);
  LCS(x,y,m,n);
  return 0;
}

