#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char str[20], cpy[20];
    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; ++i)
    {
        cpy[i] = str[i];
    }
    cpy[i] = '\0';
    printf("Copied string= %s\n", cpy);
}
