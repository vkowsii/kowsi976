#include <stdio.h>
int main()
{
    int i, n, t3 = 0, t4 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t3);
        nextTerm = t3 + t4;
        t3 = t4;
        t4 = nextTerm;
    }
    return 0;
}
