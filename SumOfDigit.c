#include <stdio.h>

int sum(int n);

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);
    printf("Sum of Digits : %d\n", sum(num));
    return 0;
}

int sum(int n)
{
    if(n == 0)
        return 0;
    else
        return (n%10) + sum(n/10);
}
