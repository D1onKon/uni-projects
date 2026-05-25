#include <stdio.h>

struct Employee
{
    char name[50];
    float salary;
};

int main()
{
    FILE *fp;
    struct Employee e[100];
    int count = 0;
    int i;
    int maxIndex = 0;

    fp = fopen("employees.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Ανάγνωση αρχείου με fscanf
    while (count < 100 && fscanf(fp, "%s %f", e[count].name, &e[count].salary) == 2)
    {
        count++;
    }

    fclose(fp);

    if (count == 0)
    {
        printf("No employees found.\n");
        return 0;
    }

    for (i = 1; i < count; i++)
    {
        if (e[i].salary > e[maxIndex].salary)
        {
            maxIndex = i;
        }
    }

    printf("Employee with highest salary: %s\n", e[maxIndex].name);

    return 0;
}