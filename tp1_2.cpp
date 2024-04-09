#include <stdio.h>
#include <math.h>

int potencia(int x) {
    int z = pow(x,2);
    printf("El cuadrado de %d es %d\n",x,z);
    return z;
}

void potencia2(int x) {
    int z = pow(x,2);
printf("El cuadrado de %d es %d\n", x, z);
}

void mostrar_variable(int x) {
    printf("La dirección de la variable es %p, su contenido es %d\n", &x, x);
}

void Invertir(int a, int b) {
    printf("Los valores son %d, %d \n", a, b);
    int c = a;
    a = b;
    b = c;
    printf("Ahora son %d, %d \n", a, b);
}

void orden(int a, int b) {
    printf("Los valores son %d, %d\n", a, b);
    if (a>b) {
       int c = a;
        a = b;
        b = c;
    }
    printf("Los valores ordenados son %d, %d\n", a, b);
}

int main() {
    potencia(2);
    potencia(11);
    potencia2(9);
    potencia2(6);
    mostrar_variable(8);
    mostrar_variable(32);
    Invertir(3,6);
    Invertir(4,1);
    Invertir(239, 540);
    orden(3,6);
    orden(4,1);
    orden(239, 540);
    orden(1392,453);
}
