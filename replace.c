#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], newstr[100], sub1[20], sub2[20], temp[20];
    int t = 0;

    printf("Enter the text: ");
    gets(str);

    printf("Enter the word which you want to replace: ");
    gets(sub1);

    printf("Enter the word with which you want to replace: ");
    gets(sub2);

    for (int i = 0; i < strlen(str); ++i)
    {
        if (str[i] != ' ' && str[i] != '.')
        {
            temp[t] = str[i];
            t++;
        }
        else {
            temp[t] = '\0';

            if (!strcmp(temp, sub1))
            {
                strcat(newstr, sub2);
                strcat(newstr, " ");
            }
            else {
                strcat(newstr, temp);
                strcat(newstr, " ");
            }
            t = 0;
        }
    }

    printf("After replacing: ");
    puts(newstr);
    printf("\n");
    return 0;
}
