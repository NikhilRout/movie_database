#include <stdio.h>

int main()
{
    int n, sum;
    printf("Enter number upto which perfect numbers are to be checked: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum = 0;
        for (int j = 1; j <= i/2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (i == sum) {
            printf("%d  ", i);
        }
    }

    return 0;
}
