#include<stdio.h>
#include<conio.h>
void main()
{
int t,n,r,s=0;
clrscr();
printf("Enter the number\n");
scanf("%d",&n);
t=n;
while(n>0)
{
r=n%10;
s=s*10+r;
n=n/10;
}
printf("Reverse=%d\n",s);
if(t==s)
printf("Number is palindrome");
else
printf("Not a palindrome");
getch();
}