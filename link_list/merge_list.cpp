#include<iostream>
#include<list>
using namespace std;
/*bool cmp(int first,int second)
{
    return(first<second);
}*/
int main()
{
    list<int> first,second;
    int n,data;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       cin>>data;
       first.push_back(data);
    }
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       cin>>data;
       second.push_back(data);
    }
    list<int>::iterator it;
    first.sort();
    second.sort();
    first.merge(second);
   // first.merge(second,cmp);
    for(it=first.begin();it!=first.end();it++)
        cout<<*it<<"\t";
return 0;
}
