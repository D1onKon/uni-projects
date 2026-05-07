#include <stdio.h>
int main()
{
    FILE *fp_in, *fp_out;
    char str[100], ch, key_ch;
    printf("Enter input file: ");
    scanf("%s", str);
    fp_in = fopen(str, "r");
    if (fp_in == NULL)
    {
        printf("Error: Input file can't be loaded\n");
        return 0;
    }
    printf("Enter output file: ");
    scanf("%s", str);
    fp_out = fopen(str, "w");
    if (fp_out == NULL)
    {
        fclose(fp_in);
        printf("Error: Output file can't be created\n");
        return 0;
    }
    getchar();
    printf("Enter key char: ");
    scanf("%c", &key_ch);
    while (1)
    {
        fscanf(fp_in, "%c", &ch);
        if (feof(fp_in))
            break;
        fprintf(fp_out, "%c", ch ^ key_ch);
    }
    printf("\n\nThe encryption was completed!\n\n");
    fclose(fp_in);
    fclose(fp_out);
    return 0;
}