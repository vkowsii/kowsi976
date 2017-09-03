#include<stdio.h>
void main()
{
int y;
printf("Enter a year:");
scanf("%d",&y);
if(y%4==0)
{
if(y%100==0)
{
if(y%4==0)
printf("leap year");
else
printf("Non leap year");
}
else
printf("leap year");
}
printf("Non leap year");
}
