#include <stdio.h>
int main()
{

    FILE *fp = fopen("test.txt", "r");

    float values[10];
    float x;

    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    while (fscanf(fp, "%f", &x) == 1)
    {

        if ((x >= 10.5) && (x <= 50))
        {
            printf("%.1f\n", x);
        }
    }

    fclose(fp);
    return 0;
}
