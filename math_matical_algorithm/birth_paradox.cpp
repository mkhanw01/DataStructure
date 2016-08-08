#include<stdio.h>
#include<cmath>
#include<algorithm>
using namespace std;
int find(float p)
{
    return ceil(sqrt(2*365*log(1/(1-p))));
}
int main()
{
    float p;
    printf("enter the probability ");
    scanf("%f",&p);
    printf("%d",find(p));
    return 0;
}
