#include<stdio.h>
void main()
{
int n,i,flag=0;
printf("Enter number:");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
flag=1;break;
}
if(flag==0)
printf("Prime number");
else
printf("Not prime number");
}
