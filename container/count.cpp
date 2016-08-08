#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int myint[]={101,102,203,403,300,101,203,403,300,300,101,101};
    int c=count(myint,myint+12,203);
    printf("%d...",c);
    return 0;
}
