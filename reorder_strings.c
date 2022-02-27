#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reorder(char[][12], int);

int main()
{
    int n = 0;
    char x[11][12];

    printf("Enter each string on a seperate line below(max 10)\n");
    printf("Type \'END\' when finished\n");

    do {
        printf("String %d: ", (n+1));
        scanf("%s", x[n]);
    }
    while (strcmp(x[n++], "END"));

    n--;

    reorder(x, n);

    printf("Reordered lis of strings:\n");
    for (int i = 0; i < n; ++i)
        printf("String %d: %s\n", (i + 1), x[i]);
    return 0;
}

void reorder(char x[10][12], int n)
{
    char temp[12];

    for (int item = 0; item < n - 1; ++item)
        for (int i = item + 1; i < n; ++i)
            if (strcmp(x[item], x[i]) > 0)
            {
                strcpy(temp, x[item]);
                strcpy(x[item], x[i]);
                strcpy(x[i], temp);
            }
    return;
}
