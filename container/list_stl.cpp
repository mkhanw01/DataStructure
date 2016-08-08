//#include<iostream>
#include<stdio.h>
//#include<iterator>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(0);
    //l.push_back(15);
    l.push_front(22);
    l.insert(++l.begin(),3);
    l.push_front(-10);
    list<int>::iterator i;
    i=l.begin();
    advance(i,3);
    //i++;
    l.insert(i,-50);
    //i=l.begin();
    //printf("%d",*i);
    for(i=l.begin();i!=l.end();i++)
       // cout<<" "<<*i;
       printf("%d\t",*i);
      // sort(l.begin(),l.end());
    //printf("after the sorting..list\n");
    //l.sort(l.begin(),l.end);
   //for(i=l.begin();i!=l.end();i++)
   // printf("%d\t",*i);
    return 0;
}
