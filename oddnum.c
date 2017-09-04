#include<stdio.h>
void main()
{
int m,n,num;
printf("Get 2 ranges:");
scanf("%d",&m);
scanf("%d",&n);
for(num=m;num<=n;num++)
{
if(num%2==1)
printf("%d",num);
}
}
