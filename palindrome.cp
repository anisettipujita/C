#include<stdio.h>
#include<conio.h>
void main()
{
int n,r=0,d,t;
printf("enter n value");
scanf("%d",&n);
t=n;
while(n!=0)
{
d=n%10;
r=r*10+d;
n=n/10;
}
printf("%d",&r);
if (r==t)
printf("palindrome");
else
printf("not palindrome");
getch();
}
