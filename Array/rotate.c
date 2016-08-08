#include<stdio.h>
#include<stdlib.h>
void dis(unsigned int const *p,unsigned int r,unsigned int c)
{
    unsigned int row,col;
    printf("\n\n");
    for(row=0;row<r;row++)
    {
        for(col=0;col<c;col++)
        {
            printf("%d\t",*(p+row*c+col));
        }
        printf("\n");
    }
}
void rot(unsigned int *s,unsigned int *d,unsigned int row,unsigned int col)
{
  unsigned int r,c;
  for(r=0;r<row;r++)
  {
      for(c=0;c<col;c++)
      {
          *(d+c*row+(row-r-1))=*(s+r*col+c);
      }
  }
}
int main()
{
    unsigned int image[][4]={{1,2,3,4,},{5,6,7,8},{9,10,11,12}};
    unsigned int *so;
    unsigned int *des;
    unsigned int m,n;
    m=3,n=4,so=(unsigned int *)image;
    des=(unsigned int *)malloc(sizeof(int)*m*n);
    dis(so,m,n);
    rot(so,des,m,n);
    dis(des,n,m);
    free(des);
    return 0;
}
