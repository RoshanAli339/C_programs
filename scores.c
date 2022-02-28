#include <stdio.h>

typedef struct student
{
    char name[15];
    float score[15];
}
student;

void read(student[], int);
void display(student[], float[], int);

int main()
{
    student s[15];
    int sn;

    printf("Enter the number of subjects: ");
    scanf("%d", &sn);

    read(s, sn);
    
    float avgs[15], cavg = 0;
    for (int i = 0; i < 5; ++i)
    {
        avgs[i] = 0;
        for (int j = 0; j < sn; ++j)
            avgs[i] += s[i].score[j];
        avgs[i] /= sn;
    }

    for (int i = 0; i < 5; ++i)
        cavg += avgs[i];

    cavg /= 5;
    
    display(s, avgs, sn);
    printf("\nClass average= %f\n", cavg);
    return 0;
}

void read (student s[15], int sn)
{
    for (int i = 0; i < 5; ++i)
    {
        printf("\nEnter name of student %d: ", (i+1));
        scanf(" %[^\n]%*c", s[i].name);

        for (int j = 0; j < sn; ++j)
        {
            printf("Enter score %d: ", (j + 1));
            scanf("%f", &s[i].score[j]);
        }
    }
}

void display (student s[15], float avgs[15], int sn)
{
    printf("\nName\t\t");
    for (int i = 0; i < sn; ++i)
        printf("S%d\t", (i+1));
    printf("Avg\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%s\t\t", s[i].name);

        for (int j = 0; j < sn; ++j)
            printf("%.2f\t", s[i].score[j]);

        printf("%.2f\n", avgs[i]);
    }
}
