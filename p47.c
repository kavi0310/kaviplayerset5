#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d=0;
clrscr();
scanf("%d%d%d",&a,&b,&c);
d=a+b+c;
if(d==180)
printf("yes");
else
printf("no");
getch();
}
