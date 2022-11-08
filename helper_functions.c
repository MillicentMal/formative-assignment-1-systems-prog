#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define BUFFER_SIZE 4096
int abslute_diff(int a, int b) {
    /*
    * Helper function to find the absolute difference between two numbers
    *
    */

    if (a > b) {
    return a - b;
    }
    else {
        return b -a;
    }
}

int intlen(int a){
    /*helper function to return the length of a number*/
    int result, counter = 0;
    while (a > 0){
        a = a / 10;
        counter++;

    }
    return counter;
}

bool check_int(char * string, int *integer) {
    int i = 0;
    while (isspace(string[i])) i++;
    int length = strlen(string);
    if (length == i) return false;

    char integer_buffer[BUFFER_SIZE]; // This creates a buffer that will store the integer pieces found in the string
    int char_counter = 0; // this will be the counter used to index the buffer

    if (string[i] == '-') {
        integer_buffer[char_counter] = '-';
        char_counter++;
        i++;
    

    }
    while((!isspace(string[i]) && i < length)) {
        if (!isdigit(string[i])) return false;
        integer_buffer[char_counter] = string[i];
        char_counter++;
        i++;

        
    }
     integer_buffer[integer_chars] = '\0';
  
  // loop through any trailing whitespace characters
  while (isspace(string[i])) i++;
  
  // if after doing so, we are NOT at the end of the string, then the string 
  // does not contain a valid integer
  if (string[i] != '\0') return false;
  
  // atoi converts the string representation of our integer to an int type 
  // value in C, and we de-reference integer to "return" the value via a pointer
  *integer = atoi(integer_buffer);
  
  // we've successfully validated the presence of an int and so can return true
  return true;

}

