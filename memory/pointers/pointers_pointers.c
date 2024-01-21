#include <stdio.h>

int main() {

    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;

    printf("&a = %p, valor: %d\n\n", &a, a);
    printf("&p1 = %p, endereco que p1 guarda: %p, e o que tem dentro dele: %d\n\n", &p1, p1 ,*p1);
    printf("&p2 = %p, endereco que p2 guarda: %p, e o que tem dentro dele: %p e %d\n\n",&p2, p2 ,*p2,**p2);

    **p2 = 99;

    printf("&a = %p, valor: %d\n\n", &a, a);
    printf("&p1 = %p, endereco que p1 guarda: %p, e o que tem dentro dele: %d\n\n", &p1, p1 ,*p1);
    printf("&p2 = %p, endereco que p2 guarda: %p, e o que tem dentro dele: %p e %d\n\n",&p2, p2 ,*p2,**p2);


    return 0;
}