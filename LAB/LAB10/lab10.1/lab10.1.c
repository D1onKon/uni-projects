#include <stdio.h>
int main()
{

    FILE *fp, *success, *fail;

    char name[50];
    char second_name[50];
    float grade1, grade2, average;

    int success_count = 0;
    int fail_count = 0;

    fp = fopen("students.txt", "r");

    if (fp == NULL)
    {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    success = fopen("success.txt", "w");
    fail = fopen("fail.txt", "w");

    if (success == NULL || fail == NULL)
    {
        printf("Error creating files\n");
        return 1;
    }

    while (fscanf(fp, "%s %s %f %f", name, second_name, &grade1, &grade2) == 4)
    {
        average = (grade1 + grade2) / 2.0;

        if (average >= 5.0)
        {
            fprintf(success, "%s %s %.2f\n", name, second_name, average);
            success_count++;
        }
        else
        {
            fprintf(fail, "%s %s %.2f\n", name, second_name, average);
            fail_count++;
        }
    }

    printf("Files created successfully.\n");
    printf("Number of successful students: %d\n", success_count);
    printf("Number of failed students: %d\n", fail_count);

    fclose(fp);
    fclose(success);
    fclose(fail);

    return 0;
}