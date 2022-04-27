#include <stdio.h>
#include <malloc.h>

char** divide(char*);

int main()
{
    printf("Enter a multiline text: ");
    char *text = (char*)malloc(200 * sizeof(char));
    scanf(" %[^\n]", text);

    int ch;
    printf("1.Sort by length\n2.Lexicographic sort(Alphabetical sort)");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            break;

    }
}

char** divide(char *text)
{
    int c = 1;
    for (int i = 0; text[i]!='\0'; ++i)
    {
        if (text[i] == ' ' || text[i] == '\n')
            c++;
    }

    char **d = (char**)malloc(c * sizeof(char*));

    for (int i = 0; text[i] != '\0'; ++i)
    {
        if (text[i]==' '|| text[i]=='\n')
    }
}