#include<stdio.h>
//#include<list>
int main()
{
    int myints[]={10,20,30,40,50};
   list<int>myints(myints,myints+5);
    printf("my list contains...");
    for(list<int>::iterator it=myints.begin();it!=myints.end();it++)
        printf("%d",*it);
    return 0;

}
