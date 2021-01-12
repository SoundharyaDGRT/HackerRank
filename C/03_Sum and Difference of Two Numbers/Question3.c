#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, sum, sub;
    scanf("%d%d", &a, &b);
    sum = a + b;
    sub = a - b;
    printf("%d %d\n", sum, sub);
    float x, y, add, dif;
    scanf("%f%f", &x, &y);
    add = x + y;
    dif = x - y;
    printf("%.1f %.1f", add, dif);
    return 0;
}
