#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int throw_dice();
void play();

int main()
{
    char answer = 'Y';

    printf("\t\t\t\tWELCOME TO THE SHOOTING CRAPS\n");
    printf("\t\t\t\t*****************************\n");

    printf("To throw the dice press Enter\n\n");

    while (toupper(answer) != 'N')
    {
        play();
        printf("Do you want to play again? (Y/N)");
        scanf("%c", &answer);
        printf("\n");
    }

    printf("THANK YOU FOR PLAYING! HAVE A NICE DAY!!\n");
    return 0;
}
int throw_dice()
{
    int d1, d2;
    srand(time(0));
    d1 = (rand() % 6) + 1;
    d2 = (rand() % 6) + 1;
    
    return (d1 + d2);
}

void play()
{
    int score1, score2;
    char dum;

    printf("Press Enter to play: ");
    scanf("%c", &dum);

    score1 = throw_dice();

    switch(score1)
    {
        case 7:
        case 11:
            printf("YOU WIN IN THE FIRST THROW!!\n");
            break;
        case 2:
        case 3:
        case 12:
            printf("YOU LOST IN THE FIRST THROW....\n");
            break;
        case 4:
        case 5:
        case 6:
        case 8:
        case 9:
        case 10:
            do {
                score2 = throw_dice(); 
            }
            while (score2 != score1 && score2 != 7);
            if (score2 == score1)
                printf("YOU WIN!!!\n");
            else
                printf("YOU LOST...\n");
    }
    return ;
}
