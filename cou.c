#include<stdio.h>
void main()
{
long long n;
int c=0;
printf("Get n:");
scanf("%lld",&n);
while(n!=0)
{
n/=10;
++c;
}
printf("%d",c);
}
