#include<stdio.h>
#include<algorithm>
using namespace std;
bool che(int a[],int s,int l,int sum)
{
    while(s<=l)
    {
      if(a[s]+a[l]==sum)
        return 1;
      else if(a[l]+a[s]>sum)
        l--;
      else
        s++;
    }
  return 0;
}
int main()
{
    int a[]={29,10,9,-2,1,2};
    int len=sizeof (a)/sizeof(a[0]);
   // printf("%d",len);
    int sum=11;
    sort(a,a+len);
    che(a,0,len-1,sum)?printf("yes"):printf("no");
    return 0;
}
