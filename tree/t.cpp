#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
    int arr[]={1,3,5,7,9,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=(int)(ceil(log2(n)));
    int ma=2*(int)pow(2,x)-1;
    printf("hight of  st %d..\t",x);
    printf("maximum size of st %d\t",ma);
    printf("size of arr %d",n);
    return 0;

}
