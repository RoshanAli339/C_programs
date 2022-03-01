#include <stdio.h>
#include <string.h>

typedef struct
{
    int date;
    int month;
    int year;
}date;

typedef struct 
{
    char name[80];
    char street[80];
    char city[80];
    int ac_no;
    char acct_type;
    float oldbalance;
    float newbalance;
    float payment;
    date lastpayment;
}
record;

record readscreen(record customer);
void writefile(record customer);

FILE *fpt;

int main()
{
    record customer;

    /*open new data file for writing only*/
    fpt = fopen("output/records.dat", "w");

    /*enter date and assign initial values*/
    printf("\t\t\t\t\t\tCUSTOMER BILLING SYSTEM\n");
    printf("\t\t\t\t\t\t-----------------------\n");

    printf("Enter today\'s date(dd/mm/yyyy): ");
    scanf("%d/%d/%d", &customer.lastpayment.date, &customer.lastpayment.month, &customer.lastpayment.year);

    customer.newbalance = 0;
    customer.payment = 0;
    customer.acct_type = 'C';

    while(1)
    {
        printf("\nName (enter \'END\' when finished): ");
        scanf(" %[^\n]%*c", customer.name);

        if (!strcmp(customer.name, "END"))
        {
            fprintf(fpt, "%s\n", "END");
            break;
        }
        
        fprintf(fpt, "\nName: %s\n", customer.name); 
        customer = readscreen(customer);
        writefile(customer);
    }

    fclose(fpt);
}

record readscreen(record customer)
{
    printf("Street: ");
    scanf(" %[^\n]", customer.street);
    printf("City: ");
    scanf(" %[^\n]", customer.city);
    printf("Account number: ");
    scanf("%d", &customer.ac_no);
    printf("Current balance: ");
    scanf("%f", &customer.oldbalance);

    return customer;
}

void writefile(record customer)
{
    fprintf(fpt, "Street: %s\n", customer.street);
    fprintf(fpt, "City: %s\n", customer.city);
    fprintf(fpt, "Account number: %d\n", customer.ac_no);
    fprintf(fpt, "Account type: %c\n", customer.acct_type);
    fprintf(fpt, "Old balance: %f\n", customer.oldbalance);
    fprintf(fpt, "New balance: %f\n", customer.newbalance);
    fprintf(fpt, "Current Payment: %f\n", customer.payment);
    fprintf(fpt, "Date: %d/%d/%d\n", customer.lastpayment.date, customer.lastpayment.month, customer.lastpayment.year);
    return;
}
