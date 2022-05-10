#include <stdio.h>

int main()
{
    float subs_mid1[4];
    float subs_mid2[4];

    for (int i = 0; i < 4; ++i)
    {
        printf("Enter marks of sub%d in mid 1: ",i+1);
        scanf("%f", &subs_mid1[i]);

        printf("Enter marks of sub%d in mid 2: ",i+1);
        scanf("%f", &subs_mid2[i]);
    }

    float avgs[4];
    for (int i = 0; i < 4; ++i)
    {
        if ( subs_mid1[i] > subs_mid2[i])
        {
            avgs[i] = (subs_mid1[i] * (75.0/100)) + (subs_mid2[i] * (25.0/100));
        }
        else {
            avgs[i] = (subs_mid2[i] * (75.0/100)) + (subs_mid1[i] * (25.0/100));
        }
    }

    printf("Average marks are: \n");
    for (int i = 0; i < 4; ++i)
    {
        printf("sub%d: %.2f\n", i+1, avgs[i]);  
    }
}