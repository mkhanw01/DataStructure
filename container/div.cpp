#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{

    div_t divesult;
    divesult=div(39,5);
    printf("39 div 5==>%d,  reminder %d",divesult.quot,divesult.rem);
    return 0;

}
