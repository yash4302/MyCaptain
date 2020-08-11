#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a Number : ");
    scanf("%d", &a);
    printf("Enter a Number : ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swapping...\n");
    printf("a : %d\nb : %d\n", a, b);
    return 0;
}
