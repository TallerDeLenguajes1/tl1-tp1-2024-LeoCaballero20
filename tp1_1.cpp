#include <stdio.h>

int main(){
    printf("Hola mundo");
    int num = 974, *punt;
    punt = &num;
    printf("\nEl contenido del puntero es: %d", *punt);
    printf("\nLa dirección de memoria almacenada por el puntero es: %p", punt);
    printf("\nLa dirección de memoria de la variable es: %p", &num);
    printf("\nLa dirección de memoria del puntero es: %p", &punt);
    printf("\nEl tamaño de memoria utilizado por la variable es: %d bytes", sizeof(num));
    return 0;
}