#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=-32768&&n<=32767||n>=1&&n<=65535)
    printf("INT");
    else
    printf("LONG");
}
