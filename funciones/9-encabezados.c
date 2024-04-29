#include <stdio.h>
#include "9-encabezados.h"

int main() {
    // Declarando variable
    int resultadoF4;
    // Declaración de la variable
    int resultadoF5;
    int v;

    // Llama a las 3 funciones
    funcion1();
    funcion2(5, 2.67);
    v = funcion3(10); 
    // Llamado a la funcion
    resultadoF4 =funcion4(7);
    // Imprime el valor que retornó funcion3()
    printf("v = %d\n", v);
    printf("resultadoF4 = %d\n", resultadoF4);
    v = funcion3(10);
    //LLamado de función
    resultadoF5 = funcion5(12);
    // Imprime el valor que retornó funcion3()
    printf("v = %d\n", v);
    // Mostrar en pantalla
    printf("resultadoF5 = %d\n", resultadoF5);
    return 0;

}

// funcion1(): Imprime un mensaje
void funcion1() {
    printf("En funcion1()...\n");
}

// funcion2(): Imprime un mensaje y las variables que recibe como argumento
void funcion2(int a, float b) {
    printf("En funcion2()...\n");
    printf("a = %d, b = %.2f\n", a, b);
}

// funcion3(): Imprime un mensaje. Retorna el valor que recibió como argumento
// incrementado en 2
// 
int funcion3(int x) {
    printf("En funcion3()...\n");
    int y = x + 2;
    return y;
}
// Implementacion de la funcion4
int funcion4(int x) {
    printf("En funcion4()...\n");
    int y = x - 2;}
int funcion5(int x) {
    printf("En funcion5()...\n");
    int y = x + 21;
    return y;
}