#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    char str3[200];

    // Εισαγωγή πρώτου αλφαριθμητικού
    printf("Enter first alphanumeric: ");
    fgets(str1, sizeof(str1), stdin);

    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second alphanumeric: ");
    fgets(str2, sizeof(str2), stdin);

    str2[strcspn(str2, "\n")] = '\0';

    strcpy(str3, str1);

    // Συνένωση δεύτερου string
    strcat(str3, str2);

    // Εμφάνιση αποτελέσματος
    printf("Combined alphanumeric is:\n");
    puts(str3);

    return 0;
}