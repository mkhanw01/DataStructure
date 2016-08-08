#include<stdio.h>
#include<string.h>
//#include<algorithm>
using namespace std;
void swape(char *c,char *h)
{
    char temp;
    temp=*c;
    *c=*h;
    *h=temp;
}
void permute(char *a,int i,int n)
{
    int j;
    if(i==n)
        printf("%s\n",a);
    else
    {
        for(j=i;j<=n;j++)
        {
            swape((a+i),(a+j));
            permute(a,i+1,n);
            swape((a+i),(a+j));
        }
    }
}
int main()
{
    char a[]="vahid";
    int c=strlen(a);
    permute(a,0,c-1);
    return 0;
}
