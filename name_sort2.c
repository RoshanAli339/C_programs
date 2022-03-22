#include <stdio.h>
#include <string.h>

void sort(char*[10], int);

int main()
{
    char *names[10];
    int n;
    printf("Enter number of names: ");
    scanf("%d", &n);

    printf("Enter the names: \n");
    for (int i = 0; i < n; ++i)
    {
        printf("Enter name %d: ", (i+1));
        gets(names[i]);
    }

    //sort(names, n);

    printf("The names after sorting are: \n");
    for (int i = 0; i < n; ++i)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}

void sort(char *names[10], int n)
{
    char *temp;
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (strcmp(names[j], names[j+1])>1)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }
}
