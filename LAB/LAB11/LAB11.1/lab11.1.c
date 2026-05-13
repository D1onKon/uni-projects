#include <stdio.h>

int main(void)
{

    char str[100];

    int i;
    int num_capital;
    int num_small;

    while (1)
    {

        printf("Enter alphanumeric(type 'end' to stop):");
        gets(str);

        if (str[0] == 'e' && str[1] == 'n' && str[2] == 'd' && str[3] == '\0')
        {
            break;
        }
        i = num_small = num_capital = 0;

        while (str[i] != '\0')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32;
                num_capital++;
            }

            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] += 32;
                num_small++;
            }
            i++;
        }
        printf("New alphanumeric is  %s.\n\n", str);
        printf("Contains %d small and %d capital letters.\n", num_small, num_capital);
    }
    return 0;
}
