#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int myint[]={10,20,30,40,42,44,60};
    vector<int> v(7);
    copy(myint,myint+7,v.begin());
    for(vector<int>::iterator i=v.begin();i!=v.end();i++)
        printf("%d\t",*i);
    return 0;
}
