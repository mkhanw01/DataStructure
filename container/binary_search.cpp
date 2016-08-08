#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int myint[]={1,3,2,0,26,47,65,-2,4,-2};
    vector<int> v(myint,myint+10);
    sort(v.begin(),v.end());
    if(binary_search(v.begin(),v.end(),-2))
        printf("item found\n");
    else
        printf("not found..");
    return 0;
}
