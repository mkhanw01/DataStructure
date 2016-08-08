#include<bits/stdc++.h>
using namespace std;
int re(int arr[],int index[],int n)
{
    int tem[n];
    for(int i=0;i<n;i++)
    tem[index[i]]=arr[i];
    for(int i=0;i<n;i++)
    {
        arr[i]=tem[i];
        index[i]=i;
    }
}
int main()
{
    int arr[]={10,11,12};
    int index[]={1,0,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    re(arr,index,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)
    cout<<index[i]<<" ";
    return 0;
}
