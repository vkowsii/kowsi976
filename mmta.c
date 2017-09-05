#include <stdio.h>
int main() {
    int n, i = 1;
    printf("
    Enter any Number:");
    scanf("%d", &num);
    printf("Multiplication table of %d: ", num);
    
    while (i <= 10) {
        printf("
        %d x %d = %d", n, i, n, * i);
        i++;
    }
    return 0;
}
