#include<stdio.h>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
    int ar[]={1,60,-10,70,-80,85};
    int si=sizeof(ar)/sizeof(ar[0]);
    int l=0,r=si-1;
    int mil=l,mir=r,sum;
    int min_sum=INT_MAX;
    sort(ar,ar+si);
    while(l<r)
    {
      sum=ar[l]+ar[r];
      if(abs(sum)<abs(min_sum))
      {
            min_sum=sum;
            mil=l;
            mir=r;
      }
      if(sum<0)
        l++;
      else
        r--;
    }
    printf("number is %d nad %d",ar[mil],ar[mir]);
    return 0;
}
