#include<stdio.h>
#include<math.h>
#include<limit.h>
int midv(int s,int e) return(s+(e-s)/2);
int min(int a,int b) return(a<b?a:b);
int costructutil(int arr[],int s,int e,int *st,int pos)
{
    if(s==e)
    {
        st[pos]=arr[s];
        return arr[s];
    }
    int mid=midv(s,e);
    st[pos]=min(constructutil(arr,s,mid,e,st,pos*2-1),constructutil(arr,mid+1,e,st,pos*2+2));;
      return st[pos];
}
int *constructST(int arr[],int n)
{
    int x=(int)ceil(log2(n));
    int ms=2(int)*pow(2,x)-1;
    int *st=new int[ms];
    costructutil(arr,0,n-1,st,0);
    return st;
}
int RMQutil(int *st,int ss,int se,int qs,int qe,int po)
{
    if(qs<=ss && qe<=se)
        return st[po];
    if(se<qs || ss>qe)
        return INT_MAX;
        int mid=midv(ss,se);
    return (min(RMQutil(st,ss,mid,qs,qe,2*po+1),RMQutil(st,mid+1,se,qs,qe,2*po+2));
}
int RMQ(int *st,int n,int qs,int qe)
{
    if(qs<0||qe>n-1||qs>qe)
    {
        printf("invalid input..");
        return -1;
    }
    return RQMutil(st,0,n-1,qs,qe,0);
}
int main()
{
    int arr[]={1,3,2,7,9,11};
    int si=sizeof(arr)/sizeof(arr[0]);
    int *st=constructST(arr,si);
    int qs=1;
    int qe=4;
    RMQ(st,si,qs,qe);
    return 0;
}
