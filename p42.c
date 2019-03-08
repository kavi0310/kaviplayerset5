#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,c=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]!=a[n-1])
{
if(a[i]<a[i+1])
c++;
}
else
c++;
}
if(n==c)
printf("yes");
else
printf("no");
getch();
}
