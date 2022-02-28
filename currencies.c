#include <stdio.h>

int main()
{
    char countries[][15]= {"British Pound", "Canadian Dollar", "Dutch Guilder", "French Franc", "German Mark", "Italian Lira", "Japanese Yen", "Mexican Peso", "Swiss Franc"};
    float c[] = {0.65, 1.4, 1.7, 5.3, 1.5, 1570, 98, 3.4, 1.3};

    int c1, c2;
    printf("1.British Pound\n2.Canadian Dollar\n3.Dutch Guilder\n4.French Franc\n5.German Mark\n6.Italian Lira\n7.Japanese Yen\n8.Mexican Peso\n9.Swiss Franc\n");
    printf("Enter the serial number of currency 1: ");
    scanf("%d", &c1);

    printf("Enter the serial number of currency 2: ");
    scanf("%d", &c2);

    float ratio = c[c2 - 1] / c[c1 - 1];

    printf("%s: %f per %s\n", countries[c2 - 1], ratio, countries[c1 - 1]);
}
