#include <stdio.h>
#include <string.h>
#include "helper_functions.c"

/**
 * @brief : takes in int as upper bound and adds odd numbers, and even ones separately
 * handles strings in a messy way
 * @return int : upper bound
 */
int main () {
    int number, even, odd, counter, chance = 0;
    counter = 0;
    even = 0;
    odd = 0;
    printf("This program will take in a number you give and do the following:\nAdd the even numbers, and output their sum\nDo the same for odd ones up to and including the number you input\n");
    
    do {
    printf("----------------------------------------------\nPlease enter an integer greater than or equal to 1\n");
    scanf("%d",&number);
    chance ++; /* increment the chances a user gets if their integer is below 1*/
    if (intlen(number) == 0) {
        printf("Please enter a valid positive integer with 10 digits or less\n");
        break;
    }
    else if (number >= 1) {
        for (counter=number; counter>0;counter--){ /* for loop to iterate from the upper limit till zero*/
            if (counter % 2 == 0) { /* checking number is even*/
                even += counter;
            }
            if (counter % 2 == 1){ /*checking if number is odd*/
                odd += counter;
            }
        }
        printf("Sum of all odd numbers is %d\n", odd);
        printf("Sum of all even number is %d\n", even);
        printf("Absolute difference between these sums is: %d\n", abslute_diff(odd, even));
        printf("A fifth of the odd sum is : %d\n", odd/5);
        printf("A third of the even sum is : %d\n", even/3);     
        
        break;
    }
    else if (number <= 0){ /*checks if the input is less than or equal to zero and asks user to try again*/
        continue;
    }
    }
    while(chance < 3);
    return 0;
}

