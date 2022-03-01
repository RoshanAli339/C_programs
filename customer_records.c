#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read(int);
void display(int);
typedef struct date
{
    int month;
    int day;
    int year;
}
date;

typedef struct account
{
    char name[80];
    char street[80];
    char city[80];
    int acc_no;
    char acct_type;
    float oldbalance;
    float newbalance;
    float payment;
    date lastpayment;
}
account;

account customer[100];

int main()
{
    int n;
    printf("\t\t\tCUSTOMER BILLING SYSTEM\n");
    printf("\t\t\t-----------------------\n");
    printf("Enter number of customers: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        read(i);

        //determining account status
        if (customer[i].payment > 0)
            customer[i].acct_type = (customer[i].payment < 0.1 * customer[i].oldbalance) ? 'O' : 'C';
        else
            customer[i].acct_type = (customer[i].oldbalance > 0) ? 'D' : 'C';

        customer[i].newbalance = customer[i].oldbalance - customer[i].payment;
    }

    for (int i = 0; i < n; ++i)
        display(i);
}

void read(int i)
{
    printf("\nCustomer no. %d\n", (i+1));
    printf("\tName: ");
    scanf(" %[^\n]", customer[i].name);
    
    printf("\tStreet: ");
    scanf(" %[^\n]", customer[i].street);

    printf("\tCity: ");
    scanf(" %[^\n]", customer[i].city);

    printf("\tAccount no.: ");
    scanf("%d", &customer[i].acc_no);

    printf("\tPrevious Balance: ");
    scanf("%f", &customer[i].oldbalance);

    printf("\tCurrent Payment: ");
    scanf("%f", &customer[i].payment);

    printf("\tPayment date(dd/mm/yyyy): ");
    scanf("%d/%d/%d", &customer[i].lastpayment.day, &customer[i].lastpayment.month, &customer[i].lastpayment.year);
    
    return;
}

void display(int i)
{
    printf("\nName: %s", customer[i].name);
    printf("\tAccount number: %d\n", customer[i].acc_no);

    printf("Street: %s\n", customer[i].street);
    printf("City: %s\n\n", customer[i].city);
    printf("Old balance: %.2f", customer[i].oldbalance);
    printf("\tCurrent payment: %.2f", customer[i].payment);
    printf("\tNew balance: %.2f\n\n", customer[i].newbalance);
    
    printf("Account status: ");
    
    switch(customer[i].acct_type)
    {
        case 'C' :
            printf("CURRENT\n\n");
            break;
        case 'O' :
            printf("OVERDUE\n\n");
            break;
        case 'D' :
            printf("DELINQUENT\n\n");
            break;
        default:
            printf("ERROR\n\n");
    }

    return;
}
