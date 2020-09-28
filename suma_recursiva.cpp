
/*Ejercio 1. Realice una función recursiva que sueme los primeros n enteros positivos
Nota: para plantear la función recursiva, tenga en cuenta que la suma puede expresarse
mediante la siguiente recurrencia...

suma(1) entonces retornar 1. si n=1
suma(n) entonces retonrar n+sumar(n-1). si n>1.*/

#include <stdio.h>
#include <conio.h>

int sumar(int);

int main(){
    int num_elementos;
    do{
        printf("Ingrese el numero de elemtnos: ");  
        scanf("%i", &num_elementos);
    }while(num_elementos <= 0);
    printf("La suma es: %i", sumar(num_elementos)); 
    getch();
    return 0;
}

int sumar(int n){  
    if(n == 1){ // caso base
        return 1;
    }
    else { // caso general
        return n + sumar(n-1);  //Llamada Recursiva
    }
}

