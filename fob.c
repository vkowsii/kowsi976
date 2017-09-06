#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, nextTrm;

    printf("Enter the number of trm: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTrm = t1 + t2;
        t1 = t2;
        t2 = nextTrm;
    }
    return 0;
}
