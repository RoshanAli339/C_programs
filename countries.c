#include <stdio.h>
#include <string.h>

int search(char[]);

int main()
{
    char countries[][15]= {"Canada", "England", "France", "Germany", "India", "Israel", "Italy", "Japan", "Mexico", "China", "Russia", "USA"};
    char caps[][15] = {"Ottawa", "London", "Paris", "Bonn", "Delhi",  "Jerusalem", "Rome", "Tokyo", "Mexico City", "Beijing", "Moscow", "Washington"};

    char search[15];

    while(1)
    {
        printf("Enter country or capital: ");
        scanf(" %[^\n]%*c", search);

        if(!strcmp(search, "END"))
            return 0;

        for (int i = 0; i < 12; ++i)
        {
            if (!strcmp(search, countries[i]))
            {
                printf("The capital of %s is: %s\n", search, caps[i]);
                break;
            }
            else if (!strcmp(search, caps[i]))
            {
                printf("%s is the capital of: %s\n", search, countries[i]);
                break;
            }
        }
    }
    return 0;
}
