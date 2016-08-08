#include<stdio.h>
void print_inter(int ar1[],int ar2[],int m,int n)
{
    int i=0,j=0;
    printf("\n \n");
    while(i<m && j<n)
    {
        if(ar1[i]<ar2[j])
            i++;
        if(ar2[j]<ar1[i])
            j++;
        else
        {
            printf("%d\t",ar2[j++]);
            i++;
        }
    }
}
void print_union(int ar1[],int ar2[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(ar1[i]<ar2[j])
            printf("%d\t",ar1[i++]);
        else if(ar1[i]>ar2[j])
            printf("%d\t",ar2[j++]);
        else
        {
            printf("%d\t",ar2[j++]);
             i++;
        }
    }
     while(i<m)
            printf("%d\t",ar1[i++]);
        while(j<n)
            printf("%d\t",ar2[j++]);
}
int main()
{
    int ar1[]={2,4,6,7,9,11,30,46};
    int ar2[]={1,3,4,8,11,30};
    int m=sizeof(ar1)/sizeof(ar1[0]);
    int n=sizeof(ar2)/sizeof(ar2[0]);
    print_union(ar1,ar2,m,n);
    print_inter(ar1,ar2,m,n);
    return 0;
}
