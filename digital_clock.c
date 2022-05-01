#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, m, s;

    printf("Set time: ");
    scanf("%d:%d:%d", &h, &m, &s);

    if (  h > 23 || m >59 || s > 59)
    {
        printf("Error!!!");
        return 1;
    }

    while(1)
    {
        s++;

        if (s > 59)
        {
            s = 0;
            m++;
        }       

        if (m > 59)
        {
            h++;
            m = 0;
        } 

        if ( h > 23 )
        {
            h = 0;
        }

        printf("\n Clock: ");
        printf("%02d:%02d:%02d", h, m, s);
        system("sleep 1");
        system("clear");
    }
}