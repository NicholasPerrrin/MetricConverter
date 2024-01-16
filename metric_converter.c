//program used to convert lbs to kgs, grams to ounces, miles to kilometers, and cm to inch

#include <stdio.h>

int main() {
    //variables
    int input;
    double units;
    double convertedUnits;

    do {
    //prompt user to choose a conversion to perform
    printf("\nWhat conversion would you like performed?\n(Enter 1 for lb to kg, 2 for grams to ounces, 3 for miles to kilometers, 4 for cm to in, and 5 to quit the application.)");
    //receive input from user on what conversion they would like performed
    scanf("%d", &input);
    
    if (input != 5) {
    //use switch statements to select which conversion to perform
    //receive units from user
        printf("Input the units that you want converted to 2 decimal places:");
        scanf("%lf", &units);
        
        switch (input) {

                //convert lbs to kgs
                case 1:
                    convertedUnits = units / 2.205;
                    printf("%.2lf lbs is equivalent to %.2lf kgs\n", units, convertedUnits);
                    //display units
                    break;

                //convert grams to ounces
                case 2:
                    convertedUnits = units / 28.35;
                    printf("%.2lf grams is equivalent to %.2lf ounces\n", units, convertedUnits);
                    //display units
                    break;

                //convert miles to kilometers
                case 3:
                    convertedUnits = units * 1.609;
                    printf("%.2lf miles is equivalent to %.2lf kilometers\n", units, convertedUnits);
                    //display units
                    break;

                //convert cms to inches
                case 4:
                    convertedUnits = units / 2.54;
                    printf("%.2lf centimeters is equivalent to %.2lf inches\n", units, convertedUnits);
                    //display units
                    break;

                case 5:
                    break;
        }
    }
    } while (input != 5);
    return 0;
}