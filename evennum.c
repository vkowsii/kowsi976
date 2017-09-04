#include<stdio.h>
void main()
{int m,n,num;
printf("Get 2 numbers:");
scanf("%d %d",&m,&n);
for(num=m;num<=n;num++)
{if(num%2==0)
printf("%d",num);
}
}
