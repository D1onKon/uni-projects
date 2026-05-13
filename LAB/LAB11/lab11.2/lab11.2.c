#include <stdio.h>
#include <string.h>

int main(void)
{

    char str[100];
    int i;

    printf("Enter alphanumeric up to 100 characters:");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}