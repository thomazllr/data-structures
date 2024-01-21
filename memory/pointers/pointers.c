#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 10;
    int *p1 = NULL;
    int *p2;

    p1 = &a;
    p2 = p1;
    *p2 = 4;


    return 0;
}