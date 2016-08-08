#include<stdio.h>
#include<algorithm>
using namespace std;
int issubset(int ar1[],int ar2[],int m,int n)
{
    int i=0,j=0;
    if(m<n)
        return 0;
        while(i<m && j<n)
        {
            if(ar1[i]<ar2[j])
                i++;
            else if(ar1[i]==ar2[j])
            {
                i++;j++;
            }
            else
            return 0;
        }
        if(j<n)
            return 0;
        return 1;

}
int main()
{
  int ar1[]={11,1,13,21,3,7},m;
  int ar2[]={7,11,-3},n;
  m=sizeof(ar1)/sizeof(ar1[0]);
  n=sizeof(ar2)/sizeof(ar2[0]);
  sort(ar1,ar1+m);
  sort(ar2,ar2+n);
  issubset(ar1,ar2,m,n)?printf("True"):printf("False");
}
