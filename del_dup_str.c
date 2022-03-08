#include <stdio.h>
#include <string.h>

void del_dup(char[]);

int main()
{
    char str[30];

    printf("Enter the string: ");
    gets(str);

    del_dup(str);

    printf("After deleting duplicates: %s\n", str);
}

void del_dup(char str[30])
{

    for (int i = 0; i < strlen(str); ++i)
    {
        for (int j = i + 1; j < (strlen(str)); ++j)
        {
            if (str[i] == str[j])
            {
                for (int k = j; k < strlen(str) - 1; ++k)
                    str[k] = str[k+1];
                j--;
                str[strlen(str) - 1] = '\0';
            }
        }
    }
}
