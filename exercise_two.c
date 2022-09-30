#include <stdio.h>
#include "helper_functions.c"
int main(){
    int original, number, result = 0, remainder;
    printf("Please enter a positive integer\n");
    scanf("%d", &number);
    if (intlen(number) == 0){
        printf("Please enter a 10 digit or less number\n");
    }
    else if (intlen(number) <= 10 ){
    original = number;
    while(number > 0) {
        remainder = number % 10;
        result = result + remainder;

        number = number / 10;
    }
    printf("The sum of the digits of %d is: %d\n", original, result);
    }
    
    return 0;
}