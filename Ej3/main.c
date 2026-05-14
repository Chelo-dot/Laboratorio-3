#include <stdio.h>
#define MAX_SENSORES 10

typdef enum { NORMAL, ALERTA, FALLO } EstadosSensor;

typdef struc {
    int id;
    float valor;
    EstadoSensor estado;
} Lectura;

EstadoSensor clasificar(float valor);
int contar_estado(Lectura s[], int n, Estado Sensor e);
int lectura_extrema(Lectura s[], int n);

int main(void){

    return 0;
}
