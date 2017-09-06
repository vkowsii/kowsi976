#include <stdio.h>
int find Hcf(int a,int b)
{
    int temp;
     
    if(a==1 || b==1)
    return 0;
    while(b!=0)
    {
        temp = a%b;
        a    = b;
        b    = temp;
    }
    return a;
}
int main()
{
    int a,b;
    int hcf;
     
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
     
    hcf=find Hcf(a,b);
    printf("HCF (Highest Common Factor) of %d,%d is: %d\n",a,b,hcf);
     
    return 0;
}
