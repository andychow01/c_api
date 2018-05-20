
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef union big_small_test {
    int iNumber;
    char cNumber;
}big_small_t;

int main() {
    big_small_t test;
    test.iNumber = 0x01020304;
    printf("cNumber: %d\n", test.cNumber);
 
}


