#include <stdio.h>

int main()
{
    for (int i = 0; i < 11; ++i)
    {
        if (i % 5 == 0)
        {
            for (int j = 0; j < 11; ++j)
            {
                if (j % 5 == 0)
                {
                    printf("+ ");
                }
                else 
                {
                    printf("- ");
                }
            }
        }
        else 
        {
            for (int j = 0; j < 11; ++j)
            {
                if (j % 5 == 0)
                {
                    printf("| ");
                }
                else 
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}