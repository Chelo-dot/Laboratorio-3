#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 4

int contar_unos_fila(int m[SIZE][SIZE], int fila);
int contar_unos_columna(int m[SIZE][SIZE], int col);
int es_identidad(int m[SIZE][SIZE]);
int tiene_fila_completa(int m[SIZE][SIZE]);
int tiene_columna_completa(int m[SIZE][SIZE]);

int main(void) {
    int m[SIZE][SIZE] = {
        {1, 0, 0, 0},
        {0, 1, 1, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };

    printf("%d\n",contar_unos_fila(m, 2));

    return 0;
}


int contar_unos_fila(int m[SIZE][SIZE], int fila){
    int contador = 0;
    for(int i = 1; i < SIZE; i++){
        if(m[fila-1][i] == 1) contador ++;
    }

    return contador;
}