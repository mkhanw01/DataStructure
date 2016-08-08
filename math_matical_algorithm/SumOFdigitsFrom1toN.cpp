#include<iostream>
using namespace std;
int sumofnum(int x)
{
    int sum=0;
    while(x!=0)
    {
        sum+=x%10;
        x/=10;
    }
    return sum;
}
int sumofDigit(int n)
{
    int result=0;
    for(int x=1;x<=n;x++)
        result+=sumofnum(x);
    return result;
}
int main()
{
    int n;
    cin>>n;
    cout<<sumofDigit(n);
    return 0;
}
