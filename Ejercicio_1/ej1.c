#include <stdio.h>

int potencia(int base, int exp) {
    int resultado = 1;

    while (exp > 0) {
        resultado = resultado * base;
        exp = exp - 1;
    }

    return resultado;
}

int es_par(int resultado){
    if(resultado%2 == 0) return 1;
    return 0;
}

int main(void) {
    int base = 0;
    int exp = 0;

    do{
        printf("Ingrese el valor de la base: ");
        scanf("%d", &base);
        if (base == 0){
            printf("Error: la base debe ser diferente a 0\n");
            continue;  
        }  
        printf("Ingrese el valor del exponente: ");
        scanf("%d", &exp);
        if(exp < 0){
            printf("Error: el exponente no puede ser negativo\n");
            continue;
        }
        break; 
    }while(1);

    int resultado = potencia(base, exp);

    printf("%d^%d = %d\n",base, exp, resultado);

    printf("El resultado es:");
    if(es_par(resultado)) printf("Par\n");
    else printf("Impar\n");


    return 0;
}
