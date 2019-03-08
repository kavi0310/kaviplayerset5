#include <stdio.h>

int main()
{
    int p,a,i,j,x,y,d=0;
    scanf("%d%d",&p,&a);
    for(i=1;i<=p;i++)
    {
        for(j=1;j<=p;j++)
        {
            x=2*(i+j);
            y=i*j;
            if(x==p&&y==a)
            {
                d=1;
            }
        }
    }
if(d==1)
    printf("yes");
if(d==0)
    printf("no");
}
