#include <stdio.h>
#include <string.h>

int replace(char *str, char oldc, char newc)
{
    int count = 0;

    while (*str != '\0')
    {
        if (*str == oldc)
        {
            *str = newc;
            count++;
        }
        str++;
    }

    return count;
}

int main()
{
    char str[101];
    char c1, c2;
    int changes;

    printf("Enter alphanumeric (up to 100 characters): ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter character for replacement: ");
    scanf(" %c", &c1);

    printf("Enter new character: ");
    scanf(" %c", &c2);

    changes = replace(str, c1, c2);

    printf("Tuned alphanumeric: %s\n", str);
    printf("Amount of replacements: %d\n", changes);

    return 0;
}