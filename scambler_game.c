#include <stdio.h>
#include <string.h>
int main(void)
{
    int points[26]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    int sum1 = 0, sum2 = 0;
    char ch1[50], ch2[50];

    //taking first input
    printf("Player1: ");
    scanf("%s", ch1);
    //taking second input
    printf("Player2: ");
    scanf("%s", ch2);

    //calculating score of first player
    for(int i = 0; i < strlen(ch1); ++i)
    {
        if(ch1[i] >= 65 && ch1[i] <= 90)
        {
            sum1 += points[ch1[i] - 65];
        }
        else if( ch1[i] >= 97 && ch1[i] <= 122)
        {
            sum1 += points[ch1[i] - 97];
        }
        else
        {
            sum1 += 0;
        }
    }

    //calculating score of second player
    for(int i =0; i < strlen(ch2); ++i)
    {
        if(ch1[i] >= 65 && ch1[i] <= 90)
        {
            sum2 += points[ch1[i] - 65];
        }
        else if( ch1[i] >= 97 && ch1[i] <= 122)
        {
            sum2 += points[ch1[i] - 97];
        }
        else
        {
            sum2 += 0;
        }
    }

    //anouncing scores
    printf("Player1 score: %d\nPlayer2 score: %d\n", sum1, sum2);

    //calculating the winner
    if(sum1 > sum2)
    {
        printf("Player1 wins!\n");
    }
    else if(sum1 < sum2)
    {
        printf("Player2 wins!\n");
    }
    else if(sum1 == sum2)
    {
        printf("Tie!\n");
    }
}