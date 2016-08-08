#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int x=10,y=20;
    swap(x,y);
    vector<int> foo(4,x),bar(6,y);
    swap(foo,bar);
    vector<int>:: iterator it;
    for(it=foo.begin();it!=foo.end();it++)
    printf("%d\t",*it);
    return 0;

}
