#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[10];
    char category[10];
    float price;
    int samples;
}
flower;

int main()
{
    char category[3][6] = {"Herb", "Shrub", "Tree"};
    flower f[10];
    int ch;
    printf("Enter details of 10 plants: \n");
    for (int i = 0; i < 10; ++i)
    {
        printf("\nEnter name: ");
        scanf(" %[^\n]", f[i].name);
        printf("Select category 1.Herb 2.Shrub 3.Tree: ");
        scanf(" %d", &ch);
        strcpy(f[i].category, category[ch - 1]);  
        printf("Enter price of each flower: Rs.");
        scanf(" %f", &f[i].price);
        printf("Enter number of flowers sold: ");
        scanf("%d", &f[i].samples);
    }

    int max = 0;
    int index = 0;
    for (int i = 0; i < 10; ++i)
    {
        if (f[i].samples > max)
        {
            max = f[i].samples;
            index = i;
        }
    }

    printf("The most popular flower is: %s\n", f[index].name);
    char cat[6];
    printf("Enter the category to check the total income of; 1.Herb 2.Shrub 3.Tree: ");
    scanf(" %d", &ch);
    int total = 0;
    float income = 0.0;
    for (int i = 0; i < 10; i++)
    {
        total += f[i].samples;
        if (strcmp(f[i].category, category[ch-1]))
        {
            income += f[i].price * f[i].samples;
        }
    }

    printf("The total income over the category %s is: Rs.%.2f\n", category[ch-1], income);

    printf("Total number of plants sold: %d\n", total);
}