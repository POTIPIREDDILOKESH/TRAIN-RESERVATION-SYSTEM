#include <stdio.h>
#include <math.h>

int main()
{
    int ta, tc, choice, r, c, C;

    printf("### Train Reservation System ###\n");
    printf("\t\tWELCOME\n");
    printf("\t\tTrain Reservation System\n");
    printf("\t\t(NOTE: These rates are approved by IRCTC)\n");
    printf("\t\tSTATION TO STATION\tCHILDREN\tADULT\n");
    printf("\t\t(Per Person)\t\t(Per Person)\n");
    printf("\t\tChennai-Bangalore(route 1)\tRs.100\t\tRs.200\n");
    printf("\t\tChennai-Vizag  (route 2)\tRs.90\t\tRs.150\n");
    printf("\t\tChennai-Hyderabad(route 3)\tRs.120\t\tRs.300\n");
    printf("\t\tBangalore-Chennai(route 4)\tRs.100\t\tRs.200\n");
    printf("\t\tVizag-Chennai\t(route 5)\tRs.90\t\tRs.150\n");
    printf("\t\tHyderabad-Chennai(route 6)\tRs.120\t\tRs.300\n");

    printf("########################################\n\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("\nSelect Your Choice\n");
        printf("1. Adult+Children\n");
        printf("2. Adult\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Route Number: ");
            scanf("%d", &r);
            printf("\nHow many seats you want for adult: ");
            scanf("%d", &ta);
            printf("How many seats for children: ");
            scanf("%d", &tc);

            switch (r)
            {
            case 1:
                c = tc * 100;
                C = ta * 200;
                break;
            case 2:
                c = tc * 90;
                C = ta * 150;
                break;
            case 3:
                c = tc * 120;
                C = ta * 300;
                break;
            case 4:
                c = tc * 100;
                C = ta * 200;
                break;
            case 5:
                c = tc * 90;
                C = ta * 150;
                break;
            case 6:
                c = tc * 120;
                C = ta * 300;
                break;
            default:
                printf("Invalid Route Number\n");
                continue;
            }

            printf("The Bill To Be paid is\n");
            printf("Cost for %d Children = RS.%d\n", tc, c);
            printf("Cost for %d Adult = Rs.%d\n", ta, C);
            printf("Total Cost = %d\n", c + C);
            break;

        case 2:
            printf("Enter Route Number: ");
            scanf("%d", &r);
            printf("\nHow many seats you want for adult: ");
            scanf("%d", &ta);

            switch (r)
            {
            case 1:
                C = ta * 200;
                break;
            case 2:
                C = ta * 150;
                break;
            case 3:
                C = ta * 500;
                break;
            case 4:
                C = ta * 200;
                break;
            case 5:
                C = ta * 150;
                break;
            case 6:
                C = ta * 300;
                break;
            default:
                printf("Invalid Route Number\n");
                continue;
            }

            printf("The Bill To Be paid is\n");
            printf("Cost for %d Adult = Rs.%d\n", ta, C);
            printf("Total Cost = Rs.%d\n", C);
            break;

        default:
            printf("Invalid choice. Please choose 1 or 2.\n");
            break;
        }

        // Use getchar() to wait for a key press
        printf("\nPress Enter to continue...");
        while (getchar() != '\n'); // Clear the input buffer
    }

    return 0;
}
