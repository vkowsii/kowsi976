#include <stdio.h>
int main()
{
    int n, reverse n = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        remainder = n%10;
        reversed n = reversed n*10 + remainder;
        n /= 10;
    }

    printf("Reversed n = %d", reversed n);

    return 0;
}                                           
