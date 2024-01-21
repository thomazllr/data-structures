#include <stdio.h>

int main() {

    int a = 10;
    int b,c;

    printf("Endereco de memoria de a: %p\n", &a); 
    printf("Valor da variavel de a: %d\n\n", a);

    printf("Endereco de memoria de b: %p\n", &b);
    printf("Valor da variavel de b: %d\n\n", b);

    printf("Endereco de memoria de c: %p\n", &c);
    printf("Valor da variavel de c: %d\n\n", c);

    b = 20;
    c = a +b;

    printf("Depois de adicionar valores: \n");
    printf("Endereco de memoria de a: %p\n", &a); 
    printf("Valor da variavel de a: %d\n\n", a);

    printf("Endereco de memoria de b: %p\n", &b);
    printf("Valor da variavel de b: %d\n\n", b);

    printf("Endereco de memoria de c: %p\n", &c);
    printf("Valor da variavel de c: %d\n\n", c);

    return 0;
}