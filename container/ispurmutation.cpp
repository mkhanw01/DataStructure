#include<algorithm>
#include<vector>
#include<stdio.h>
using namespace std;
int main()
{
    vector<int,5> f={1,3,5,4,2};
    vector<int,5> m={5,4,1,2,3};
    if(is_permutation(f.begin(),f.end(),m.begin()))
        pritnf("both the array have the same elements..");
}
