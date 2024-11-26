#include <stdio.h>

int main() // ข้อที่ 3
{
    int a;
    int b;
    printf("n1: ");
    scanf("%d", &b);
    printf("n2: ");
    scanf("%d", &a);

    if (b > a)
    {
        printf("%d greater than %d\n", b, a);
        printf("greater than %d", (b - a));
    }
    else
    {
        printf("%d greater than %d\n", a, b);
        printf("greater than %d", (a - b));
    }
    return 0;
}