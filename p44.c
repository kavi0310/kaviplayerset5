#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,b,l=0;
clrscr();
scanf("%s",&a);
scanf("%d",&b);
for(i=0;a[i]!='\0';i++)
{
l++;
}
for(i=b;i<l;i++)
{
printf("%c",a[i]);
}
for(i=0;i<b;i++)
{
printf("%c",a[i]);
}
getch();
}
