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
    printf("%d\n", es_identidad(m));
    return 0;
}

int es_identidad(int m[SIZE][SIZE]){
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if(i == j && m[i][j] == 0) return 0;
            else if(i != j && m[i][j] == 1) return 0;
        }
    }    
    return 1;
}



int tiene_columna_completa(int m[SIZE][SIZE]){
    for(int i = 0; i < SIZE; i++){
        if(contar_unos_columna(m, i) == SIZE) return 1;
    }
    return 0;
}

int tiene_fila_completa(int m[SIZE][SIZE]){
    for(int i = 0; i < SIZE; i++){
        if(contar_unos_fila(m, i) == SIZE) return 1;
    }
    return 0;
}

int contar_unos_columna(int m[SIZE][SIZE], int col){
    int contador = 0;
    for(int i = 0; i < SIZE; i++){
        if(m[i][col] == 1) contador ++;
    }

    return contador; 
}

int contar_unos_fila(int m[SIZE][SIZE], int fila){
    int contador = 0;
    for(int i = 0; i < SIZE; i++){
        if(m[fila][i] == 1) contador ++;
    }

    return contador;
}