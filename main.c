#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct supermart {
    char product[30];
    char company[30];
    int available_quantity;
    float price;
};

int main() {

    struct supermart sup[100];
    char company[30];

    int i, input, count;
    i = input = count = 0;

    while (input != 5) {

        printf("\n\n****###### WELCOME TO SUPERMART #####****\n");
        printf("\n1. Add product information");
        printf("\n2. Display product information");
        printf("\n3. List all products of a given company");
        printf("\n4. List the count of products in the supermart");
        printf("\n5. Exit");

        printf("\n\nEnter one of the above: ");
        scanf("%d", &input);

        switch (input) {

        case 1:
            printf("Enter product name = ");
            scanf("%s", sup[count].product);

            printf("Enter company name = ");
            scanf("%s", sup[count].company);

            printf("Enter available quantity = ");
            scanf("%d", &sup[count].available_quantity);

            printf("Enter price = ");
            scanf("%f", &sup[count].price);

            count++;
            printf("Product added successfully!\n");
            break;


        case 2:
            printf("\nYou have entered the following information:\n");

            for (i = 0; i < count; i++) {

                printf("\nProduct name = %s", sup[i].product);
                printf("\nCompany name = %s", sup[i].company);
                printf("\nAvailable quantity = %d", sup[i].available_quantity);
                printf("\nPrice = %.2f\n", sup[i].price);
            }

            break;


        case 3:
            printf("Enter company name: ");
            scanf("%s", company);

            printf("\nProducts from company %s:\n", company);

            for (i = 0; i < count; i++) {

                if (strcmp(company, sup[i].company) == 0) {

                    printf("\nProduct: %s", sup[i].product);
                    printf("\nQuantity: %d", sup[i].available_quantity);
                    printf("\nPrice: %.2f\n", sup[i].price);
                }
            }

            break;


        case 4:
            printf("\nNo. of products available in the supermart: %d\n", count);
            break;


        case 5:
            printf("Exiting...");
            exit(0);


        default:
            printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}