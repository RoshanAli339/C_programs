#include <stdio.h>

int main()
{
    char str1[20], str2[20];

    printf("Enter string 1: ");
    scanf(" %[^\n]s", str1);

    printf("Enter string 2: ");
    scanf(" %[^\n]", str2);
    
    int l1, l2, i, j;
    for (l1 = 0; str1[l1] != '\0'; ++l1);
    for (l2 = 0; str2[l2] != '\0'; ++l2);

    char concat[l1+l2];

    for (i = 0; str1[i] != '\0'; ++i)
        concat[i] = str1[i];
    for (i = l1, j = 0; str2[j] != '\0'; i++, ++j)
        concat[i] = str2[j];
    concat[i] = '\0';
    printf("Concatenated string: %s\n", concat);
}
