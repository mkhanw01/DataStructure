#include<stdio.h>
#include<limits.h>
using namespace std;
int mindic(int ar[],int len,int x,int y)
{
  int i,pre;
  int min_des=INT_MAX;
  for(i=0;i<len;i++)
  {
      if(ar[i]==x || ar[i]==y)
      {
          pre=i;
          break;
      }
  }
  for(;i<len;i++)
  {
      if(ar[i]==x || ar[i]==y)
      {
          if(ar[pre]!=ar[i]&&(i-pre)<min_des)
          {
              min_des=i-pre;
              pre=i;
          }
          else
            pre=i;
      }
  }
  return min_des;
}
int main()
{
    int ar[]={3, 5, 4, 2, 6, 3, 0, 0, 5, 4, 8, 3};
    int le=sizeof(ar)/sizeof(ar[0]);
    int x=3,y=4;
    printf("minimum dic bet x and y is%d",mindic(ar,le,x,y));
    return 0;
}
