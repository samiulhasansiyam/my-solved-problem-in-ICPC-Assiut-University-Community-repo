#include<stdio.h>
int main()
{
    long long int n,sum=0;
    scanf("%lld",&n);
    sum = n * (n + 1) / 2;
    printf("%lld",sum);
    return 0;
}