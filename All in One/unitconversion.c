/*
objective:
kms to miles
inches to feet
cms to inches
pound to kgs
inches to meters
*/
/*Conversion factors:
1 kilometer = 0.6214 miles

1 inch = 0.0833 feet

1 centimeter = 0.3937 inches

1 pound = 0.4536 kilograms

1 inch = 0.0254 meters*/
#include <stdio.h>
float main()
{
    int choice;
    float num, km, inches, cm, pound;
    {
    
        printf("This is a unit conversion program , Choose a number you want to convert:\n");
        printf("Entering 0 will automatically exit the program\n");
        printf("1. Kilometers to Miles\n");
        printf("2. Inches to Feet\n");
        printf("3. Centimeters to Inches\n");
        printf("4. Pounds to Kilograms\n");
        printf("5. Inches to Meters\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            printf("Exiting the program...........\n");
            printf("Done.\n");
            break;
        case 1:
            printf("Enter the number of kilometers: ");
            scanf("%f", &km);
            printf("%.1f kilometers is equal to %.4f miles\n", km, km * 0.6214);
            break;
        case 2:
            printf("Enter the number of inches: ");
            scanf("%f", &inches);
            printf("%.1f inches is equal to %.4f feet\n", inches, inches * 0.0833);
            break;
        case 3:
            printf("Enter the number of centimeters: ");
            scanf("%f", &cm);
            printf("%.1f centimeters is equal to %.4f inches\n", cm, cm * 0.3937);
            break;
        case 4:
            printf("Enter the number of pounds: ");
            scanf("%f", &pound);
            printf("%.1f pounds is equal to %.4f kilograms\n", pound, pound * 0.4536);
            break;
        case 5:
            printf("Enter the number of inches: ");
            scanf("%f", &inches);
            printf("%.1f inches is equal to %.4f meters\n", inches, inches * 0.0254);
            break;
        default:
            printf("Invalid choice. Please try again.\n");

            
        }
        return 0;  
   }
}
