#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define N1 1
#define N2 127

int largest_multiple(int n)
{
    int l = 1;

    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0 && i > l)
            l = i;
    }

    return l;
}

int random_()
{
     srand(time(0));
     return (rand() % 100) + 1;
}

int main()
{
    char text[150];
    int ch;
    printf("Enter the text: ");
    scanf("%[^\n]%*c", text);
    
    int r = random_();

    for (int i = 0; i < strlen(text); ++i)
    {
        ch = text[i];
        ch += r;
        if (ch > N2)
        {
            ch -= largest_multiple(N2);
            ch += N1;
        }

        printf("%d ", ch);
    }

    printf("\n");
    return 0;
}
