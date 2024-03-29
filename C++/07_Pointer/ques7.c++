#include <cstdio>
#include <iostream>

void update(int *a, int *b)
{
    int sum, sub;
    sum = *a + *b;
    sub = *a - *b > 0 ? *a - *b : -(*a - *b);
    *a = sum;
    *b = sub;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
