#include <stdio.h>
int main()
{

    FILE *fp = fopen("students.txt", "r");

    float grade1, grade2, grade3, average;
    float sum1 = 0, sum2 = 0, sum3 = 0;
    int count = 0;

    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    while (fscanf(fp, "%f %f %f", &grade1, &grade2, &grade3) == 3)
    {
        sum1 += grade1;
        sum2 += grade2;
        sum3 += grade3;
        count++;
    }

    if (count > 0)
    {
        printf("Average of grades: %.2f\n", sum1 / count);
        printf("Average of grades: %.2f\n", sum2 / count);
        printf("Average of grades: %.2f\n", sum3 / count);
    }

    fclose(fp);
    return 0;
}