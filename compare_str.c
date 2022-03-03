#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20];
    printf("Enter string 1: ");
    scanf(" %[^\n]s", str1);

    printf("Enter string 2: ");
    scanf(" %[^\n]s", str2);

    int l1, l2;
    for (l1 = 0; str1[l1] != '\0'; l1++);
    for (l2 = 0; str2[l2] != '\0'; l2++);
    
    int check = 0;

    if (l2 > l1)
        printf("%s is greater than %s\n", str2, str1);
    else if (l2 < l1)
        printf("%s is greater than %s\n", str1, str2);
    else
     {
         for (int i = 0; str1[i] != '\0'; ++i)
         {
             if(str1[i] > str2[i])
             {
                 check = str1[i] - str2[i];
                 break;
             }
             else if (str1[i] < str2[i])
             {
                 check = str1[i] - str2[i];
                 break;
             }
         }
        if (!check)
            printf("%s is equal to %s\n", str1, str2);
        else if (check > 0)
            printf("%s is greater than %s\n", str1, str2);
        else
            printf("%s is greater than %s\n", str2, str1);
     }
    
    return 0;
}
         
