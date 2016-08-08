#include<stdio.h>
#include<string.h>
int max(int  x,int y){return (x>y?x:y);}
int lcs(char *x,char *y,int m,int n)
{
   int l[m+1][n+1];
   int i,j;
    for(i=0;i<=m;i++)
        l[i][0]=0;
    for(j=1;j<=n;j++)
        l[0][j]=0;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(x[i]==y[j])
                l[i][j]=l[i-1][j-1]+1;
            else
            l[i][j]=max(l[i-1][j],l[i][j-1]);
        }
    }
    return l[m][n];
}
int main()
{
  char x[] = "AGGTAB";
  char y[] = "GXTXAYB";
  int m=strlen(x);
  int n=strlen(y);
  printf("longest len is %d",lcs(x,y,m,n));
  return 0;
}
