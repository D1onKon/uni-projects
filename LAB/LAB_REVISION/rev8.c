#include <stdio.h>

struct Books
{
    char title[50];
    char author[50];
    int year;
};

int main(void)
{

    FILE *fp;
    struct Books b[3];
    int i;

    printf("Enter 3 books:");
    for (i = 0; i < 3; i++)
    {
        printf("\nTitle of book number %d :", i + 1);
        scanf("%s", b[i].title);

        printf("\nEnter author of book number %d: ", i + 1);
        scanf("%s", b[i].author);

        printf("Enter year of book number %d: ", i + 1);
        scanf("%d", &b[i].year);
    }

    fp = fopen("recent_books.txt", "w");

    if (fp == NULL)
    {

        printf("ERROR!|CANNOT OPEN FILE!\n");
        return 1;
    }

    for (i = 0; i < 3; i++)
    {
        if (b[i].year >= 2010)
        {
            fprintf(fp, "%s %s\n", b[i].title, b[i].author);
        }
    }

    fclose(fp);

    return 0;
}