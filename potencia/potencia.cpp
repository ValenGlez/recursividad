#include <stdio.h>

int potencia(int base, int exponente){
    if(exponente == 0){
        return 1;
    }else if(exponente == 1){
        return base;
    }else{
        return base * potencia(base, exponente - 1);
    }
}

int main(){
    int numeroBase, numeroExponente, resultado;
    printf("Ingrese nro de Base: ");
    scanf("%d", &numeroBase);

    printf("Ingrese nro de Exponente: ");
    scanf("%d", &numeroExponente);

    resultado = potencia(numeroBase, numeroExponente);
    printf("\nPotencia = %d\n" ,resultado);
    return 0;
}
