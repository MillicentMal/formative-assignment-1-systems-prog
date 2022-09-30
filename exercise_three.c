#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int perfect_sq(int a)
{
    double num; 
    num = sqrt((double) a);
    double square = round(num) * round(num);
    return (int) square;
}

void main (){
    if (perfect_sq(8) == 9){
printf("Pass\n");

    }
    if (perfect_sq(18) == 16){
printf("Pass\n");

    }
    if (perfect_sq(2) == 1){
printf("Pass\n");

    }


}