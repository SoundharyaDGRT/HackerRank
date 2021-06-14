#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, sum = 0, r;
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r;
    }
    printf("%d", sum);

    return 0;
}
