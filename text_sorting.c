#include <stdio.h>
#include <malloc.h>
#include <string.h>

char** divide(char*,int);
void length_sort(char**,int);
void lexicographic_sort(char**,int);
void display(char**, int);

int main()
{
    printf("Enter a multiline text(end with a newline): ");
    char *text = (char*)malloc(200 * sizeof(char));
    scanf(" %[^#]", text);

    int ch;
    printf("1.Sort by length\n2.Lexicographic sort(Alphabetical sort)\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    int c = 1;
    for (int i = 0; text[i]!='\0'; ++i)
    {
        if (text[i] == ' ' || text[i] == '\n')
            c++;
    }
    char **words = divide(text, c);
    switch (ch) {
        case 1:
            length_sort(words, c);
            printf("After sorting by length the words are: \n");
            display(words,c);
            break;
        case 2:
            lexicographic_sort(words, c);
            printf("After sorting by alphabetical order the words are: \n");
            display(words, c);
            break;
        default:
            printf("INVALID INPUT");
    }
}

char** divide(char *text, int c)
{
    char **d = (char**)malloc(c * sizeof(char*));
    int row = 0, col = 0;
    for (int i = 0; text[i] != '\0'; ++i)
    {
        if (text[i]==' '|| text[i]=='\n')
        {
            d[row][col] = '\0';
            row++;
            col=0;
        }
        else 
        {
            d[row][col] = text[i];
            col++;    
        }
    }

    return d;
}


void length_sort(char **words, int n)
{
    char *temp;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i; ++j)
        {
            if (strlen(words[j]) > strlen(words[j+1]))
            {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], temp);
            }
        }
    }
}

void lexicographic_sort(char **words, int n)
{
    char *temp;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - i; ++j)
        {
            if (strcmp(words[j], words[j+1]) > 0)
            {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], temp);
            }
        }
    }
}

void display(char **words, int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%s  ", words[i]);
    }
}