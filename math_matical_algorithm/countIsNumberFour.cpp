#include<iostream>
using namespace std;
bool has4(int x)
{
    while(x!=0)
    {
        if(x%10==4)
        return true;
        x/=10;
    }
    return false;
}
int count_as4(int n)
{
    int result=0;
    for(int x=1;x<=n;x++)
        result+=has4(x)?1:0;
    return result;
}
int main()
{
    int n;
    cin>>n;
    cout<<count_as4(n);
    return 0;
}
