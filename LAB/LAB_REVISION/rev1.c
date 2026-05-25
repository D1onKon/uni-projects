#include <stdio.h>

int main()
{
    int arr[5];
    int *ptr;
    int sum = 0;

    ptr = arr;

    printf("Enter 5 numbers");

    for (int i = 0; i < 5; i++)
    {
        printf("\nNumber %d: ", i + 1);
        scanf("%d", ptr + i);
    }

    // Υπολογισμός αθροίσματος
    for (int i = 0; i < 5; i++)
    {
        sum += *(ptr + i);
    }

    // Εμφάνιση αποτελέσματος
    printf("Sum is: %d\n", sum);

    return 0;
}