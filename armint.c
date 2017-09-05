#include <stdio.h>
#include <math.h>

int main()
{
    int low, high, i, tmp1, tmp2, remainder, n = 0, result = 0;

    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d an %d are: ", low, high);

    for(i = low + 1; i < high; ++i)
    {
        tmp2 = i;
        tmp1 = i;

        
        while (tmp1 != 0)
        {
            tmp1 /= 10;
            ++n;
        }
        while (tmp2 != 0)
        {
            remainder = tmp2 % 10;
            result += pow(remainder, n);
            tmp2 /= 10;
        }

        if (result == i) {
            printf("%d ", i);
        }
        n = 0;
        result = 0;

    }
    return 0;
}
