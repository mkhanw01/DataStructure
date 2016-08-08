#include<list>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    list<int> mylist;
    for(int i=0;i<10;i++)
        mylist.push_back(i*5);
        list<int>::iterator it1,it2,it3;
    it1=it2=mylist.begin();
    //for(it3=mylist.begin();it3!=mylist.end();it3++)
    //printf("%d\t",*it3);
    advance(it2,6);
    it1++;
    mylist.erase(it1);
    //for(it3=mylist.begin();it3!=mylist.end();it3++)
    //printf("%d\t",*it3);
    mylist.erase(it2);
    //for(it3=mylist.begin();it3!=mylist.end();it3++)
    //printf("%d\t",*it3);
    mylist.erase(it1,it2);
    for(it3=mylist.begin();it3!=mylist.end();it3++)
    printf("%d\t",*it3);
    return 0;
}
