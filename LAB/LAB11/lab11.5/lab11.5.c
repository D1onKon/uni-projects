#include <stdio.h>
#include <string.h>

int main(void)
{

    char str[100];
    char key;
    int count = 0;

    printf("Enter alphanumeric(minimum 3 characters):");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    while (strlen(str) < 3)
    {
        printf("\nEnter at least 3 characters: ");
        fgets(str, 100, stdin);
        str[strcspn(str, "\n")] = '\0';
    }

    printf("\nEnter key to check repetition:");
    scanf("%c", &key);

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {

        if (str[i] == key)
        {
            count++;
        }
    }

    if (count == 0)
    {

        printf("Key doesnt exist in alphanumeric!\n");
    }

    else
    {

        printf("[%c] key exists %d times", key, count);
    }

    return 0;
}