#include<bits/stdc++.h>
using namespace std;
int pos(int ar[],int n)
{
    int lmax[n];
    lmax[0]=INT_MIN;
    for(int i=1;i<n;i++)
        lmax[i]=max(lmax[i-1],ar[i-1]);
    int rmin=INT_MAX;
    for(int i=n-1;i>=0;i--)
    {
        if(lmax[i]<ar[i]&& rmin>ar[i])
            return i;
        rmin=min(ar[i],rmin);
    }
    return -1;
}
int main()
{
    int ar[]={5,1,4,3,6,8,10,7,9};
    int n=sizeof(ar)/sizeof(ar[0]);
    printf("position is %d",pos(ar,n));
    return 0;
}
