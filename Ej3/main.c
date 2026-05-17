#include <stdio.h>
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
    int valor = 0;
    for(int i = 0; i < n; i++){
        printf("Sensor %d \nid:", i);
        scanf("%d", &id);
        s[i].id = id;
        printf("valor: ");
        scanf("%d", valor);
        s[i].valor = valor;
        s[i].estado = clasificar(valor);
    }

    

    return 0;
}

EstadosSensor clasificar(float valor){
    if(valor >= 40 && valor <= 60) return NORMAL;
    else if(valor < 20 || valor > 80) return FALLO;
    else return ALERTA;
}
