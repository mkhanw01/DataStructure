#include<stdio.h>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    int myints[5]={10,20,30,40,50};
    list<int> l(myints,myints+5);
    printf("my list contains...");
    for(list<int>::iterator it=l.begin();it!=l.end();it++)
        printf("%d\t",*it);
    return 0;

}
