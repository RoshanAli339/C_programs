#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main()
{
    char *name = (char*)malloc(20 * sizeof(char));

    printf("Enter the name: ");
    scanf(" %[^\n]", name);

    printf("Given name is: %s\n", name);
}
