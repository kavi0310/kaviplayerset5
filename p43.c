#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,j,l=0,c=0;
    scanf("%s %s",a,b);
    for(j=0;b[j]!='\0';j++)
        {
            l++;
        }
    for(j=0;b[j]!='\0';j++)
    {
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]==b[j])
            {
            c++;
            break;
            }
        }
    }
    if(c==l)
    printf("yes");
    else
    printf("no");
}
