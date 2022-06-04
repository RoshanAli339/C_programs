#include <stdio.h>

int main()
{   
    char name[20];
    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    for (int i = 0; name[i] != '\0'; ++i)
    {
        printf("%d", (name[i]-96));
    }
    printf("\n");
}