#include <stdio.h>

int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}

int main()
{
    int N;

    do
    {
        printf("Enter a positive number N: ");
        scanf("%d", &N);
    } while (N <= 0);

    printf("Sum 1 + 2 + ... + %d is: %d\n", N, sum(N));

    return 0;
}