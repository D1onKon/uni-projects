#include <stdio.h>

int main()
{
    FILE *fp;
    int num;
    int count = 0;

    fp = fopen("numbers.txt", "w");

    if (fp == NULL)
    {
        printf("ERROR!|Cannot open file!\n");
        return 1;
    }

    while (1)
    {
        printf("Enter number(0 to exit): ");
        scanf("%d", &num);

        if (num == 0)
            break;

        fprintf(fp, "%d\n", num);
    }

    fclose(fp);

    fp = fopen("numbers.txt", "r");

    if (fp == NULL)
    {
        printf("ERROR!|Cannot open file!\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1)
    {
        count++;
    }

    fclose(fp);

    printf("Total numbers read: %d\n", count);

    return 0;
}