#include <stdio.h>

int main()
{
    int a, b, ans;
    char o, ch;

    printf("Enter the mathematical expression: ");
    scanf("%d%c%d", &a, &o, &b);
    while (1)
    {
        if (o == '+')
            ans = a + b;
        else if (o == '-')
            ans = a - b;
        else if (o == '/')
            ans = a / b;
        else if (o == '*')
            ans = a * b;
        else if (o == '%')
            ans = a % b;
        
        printf("%d %c %d = %d\n", a, o, b, ans);

        printf("Do you want to calculate another expression (Y/N): ");
        scanf(" %c", &ch);

        if (ch == 'N' || ch == 'n')
            return 1;
        else if (ch == 'Y' || ch == 'n')
        {
            printf("Enter the mathematical expression: ");
            scanf("%d%c%d", &a, &o, &b);
        }
    }
}