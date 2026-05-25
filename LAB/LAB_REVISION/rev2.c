#include <stdio.h>

void triple_values(int *a, int *b)
{
    *a = (*a) * 3;
    *b = (*b) * 3;
}

int main(void)
{

    int x, y;
    printf("Enter number 1:");
    scanf("%d", &x);

    printf("\nEnter number 2:");
    scanf("%d", &y);

    triple_values(&x, &y);

    printf("\nNew values are:%d , %d ", x, y);

    return 0;
}