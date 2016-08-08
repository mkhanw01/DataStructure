//#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
int main()
{
 std::array<int,5> myarray={30,25,15,10,24};
 for(int i=myarray.begin();i!=myarray.end(),i++)
    std::cout<<" "<<*i;
 return 0;
}
