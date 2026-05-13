#include <stdio.h>
#include <string.h>

int main(void)
{

    char str1[100], str2[100];
    int i = 0;

    printf("Enter alphanumeric up to 100 characters:");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    while (str1[i] != '\0')
    {

        if (str1[i] == 'a')
        {
            (str1[i] = 'Z');
        }
        i++;
    }

    strcpy(str2, str1);

    printf("New alphanumeric is: %s", str2);

    return 0;
}
