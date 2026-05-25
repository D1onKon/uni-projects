#include <stdio.h>
#include <string.h>

struct Product
{
    char name[50];
    float price;
};

int main()
{
    struct Product p[3];
    int i, minIndex = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Enter product name %d: ", i + 1);
        scanf("%s", p[i].name);

        printf("Enter product price %d: ", i + 1);
        scanf("%f", &p[i].price);
    }

    for (i = 1; i < 3; i++)
    {
        if (p[i].price < p[minIndex].price)
        {
            minIndex = i;
        }
    }

    printf("Product with smaller price is: %s\n", p[minIndex].name);

    return 0;
}