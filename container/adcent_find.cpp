#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int myint[]={5,20,5,30,30,20,10,10,20};
    vector<int> v(myint,myint+9);
    vector<int>:: iterator it;
    it=adjacent_find(v.begin(),v.end());
    printf("%d is first sdjecent in the list.\n",*it);

    return 0;
}
