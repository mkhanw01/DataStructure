#include<iostream>
using namespace std;
struct point
{
    int x,y;
};
bool overlap(point l1,point r1,point l2,point r2)
{
    if(l1.x>r2.x ||l2.x>r1.x)
        return false;
    if(l1.y<r2.y ||l1.y<r1.y)
        return false;
    return true;
}
int main()
{
    point l1={0,10},r1={-10,0};
    point l2={-5,5},r2={15,0};
    if(overlap(l1,r1,l2,r2))
        cout<<"rectangle overlap..";
    else
        cout<<"Not overlaeped..";
        return 0;

}
