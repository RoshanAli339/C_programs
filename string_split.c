#include <stdio.h>
#include <string.h>

int main()
{
    char text[50];
    printf("Enter text: ");
    scanf(" %[^\n]%*c", text);

    char t1[25], t2[25];
    int t1l = 0, t2l = 0;
    for (int i = 0; i < strlen(text); ++i)
    {
        if (i & 0x01)
        {
            t1[t1l] = text[i];
            t1l++;
        }
        else 
        {
            t2[t2l] = text[i];
            t2l++;
        }
    }

    printf("Sub string 1: %s\n", t1);
    printf("Sub string 2: %s\n", t2);

    return 0;
}
