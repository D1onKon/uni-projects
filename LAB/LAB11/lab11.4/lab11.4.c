#include <stdio.h>
#include <string.h>

#define MAX 100
#define SIZE 50

int exists(char names[][SIZE], int count, char str[])
{
    for (int i = 0; i < count; i++)
    {
        if (strcmp(names[i], str) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int main(void)
{
    char names[MAX][SIZE];
    char input[SIZE];
    int count = 0;

    while (1)
    {
        printf("Enter passenger name (---- to stop): ");
        fgets(input, SIZE, stdin);
        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "----") == 0)
        {
            break;
        }

        if (exists(names, count, input))
        {
            printf("Name already exists! Not added.\n");
        }
        else
        {
            strcpy(names[count], input);
            count++;
        }
    }

    printf("\nPassenger list:\n");

    for (int i = 0; i < count; i++)
    {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}