#include <stdio.h>
#include <ctype.h>
struct Tuple {
    int lower, upper, special;
};

struct Tuple string_check(char *s) {
struct Tuple tuple = { 0, 0, 0};
    while(*s) {
        if (*s >= 65 && *s <=90) {
            tuple.upper += 1;
        }
        else if (*s >= 97 && *s<= 122){
            tuple.lower += 1;

        }
        else {
            tuple.special += 1;
        }
        s++;
    }
    return tuple;
}

void main () {
    struct Tuple tuple = string_check("Hello World!");
    printf("This string has %d uppercase characters.\n", tuple.upper);
        printf("This string has %d lowercase characters.\n", tuple.lower);
            printf("This string has %d uppercase characters.\n", tuple.special);
}