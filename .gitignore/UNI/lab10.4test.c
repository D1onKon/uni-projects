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

    while (fscanf(fp, "%f", &x) != EOF)
    {
        printf("%f\n", x);
    }

    if ((x >= 10.5) && (x <= 50))
    {

        for (int i = 0; i < 10; i++)
        {

            (x = values[i]);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%f\n", values[i]);
    }
}