#include <stdio.h>
#include <stdlib.h>
#define MAX_SENSORES 10

typedef enum { NORMAL, ALERTA, FALLO } EstadosSensor;

typedef struct {
    int id;
    float valor;
    EstadosSensor estado;
} Lectura;

EstadosSensor clasificar(float valor);
int contar_estado(Lectura s[], int n, EstadosSensor e);
int lectura_extrema(Lectura s[], int n);

int main(void){


    // Lectura de sensores
    Lectura s[MAX_SENSORES];
    int n;
    printf("Ingrese el número de sensores a ingresar (MAX 10):\n");
    scanf("%d", &n);
    int id = 0;
    float valor = 0;
    for(int i = 0; i < n; i++){
        printf("Sensor %d \nid:", i+1);
        scanf("%d", &id);
        s[i].id = id;
        printf("valor: ");
        scanf("%f", &valor);
        s[i].valor = valor;
        s[i].estado = clasificar(valor);
    }

    int in = lectura_extrema(s, n);


    return 0;
}

EstadosSensor clasificar(float valor){
    if(valor >= 40 && valor <= 60) return NORMAL;
    else if(valor < 20 || valor > 80) return FALLO;
    else return ALERTA;
}

int lectura_extrema(Lectura s[], int n){
    int max = 0;
    int in = 0;

    for(int i = 0; i < n; i++){
        if(abs(s[i].valor - 50) >= max){
            max = s[i].valor - 50;
            in = i; 
        }
    }
    printf("---Lectura Extrema---\nid: %d\nvalor %.1f\n", s[in].id, s[in].valor);
    return in;
}