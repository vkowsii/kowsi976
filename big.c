#include<stdion.h>
void main()
{
int a,b,c;
printf("Enter 3 numbers !");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
printf("A is bigger");
else if(b>a && b>c)
printf("B is bigger");
else
printf("C is bigger");
}
