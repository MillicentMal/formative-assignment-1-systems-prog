
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

