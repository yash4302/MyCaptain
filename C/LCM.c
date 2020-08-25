#include <stdio.h>

long long GCD(long long a, long long b);
long long LCM(long long a, long long b);

int main()
{
    long long a, b;
    printf("Enter First Number : ");
    scanf("%lld", &a);
    printf("Enter Second Number : ");
    scanf("%lld", &b);
    printf("LCM : %lld\n", LCM(a,b));
    return 0;
}

long long GCD(long long a, long long b)
{
    if(b == 0)
        return a;
    else if(a < b)
        return GCD(b,a);
    else
        return GCD(b, a%b);
}

long long LCM(long long a, long long b)
{
    return (a*b)/GCD(a,b);
}
