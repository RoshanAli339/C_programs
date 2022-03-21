#include <stdio.h>
#include <stdlib.h>

int main()
{
    char **names;
    int n;
    printf("Enter number of names: ");
    scanf("%d", &n);

    names = (char**)malloc(n * sizeof(char));
    printf("Enter the names: \n");
    for (int i = 0; i < n; ++i)
    {
        *(names+i) = (char*)malloc(20 * sizeof(char));
        printf("Enter name %d:",(i+1));
        scanf(" %[^\n]", *(names+i));
    }

    printf("The given names are: \n");
    for (int i = 0; i < n; ++i)
        printf("%s\n", *(names+i));
    return 0;
}
