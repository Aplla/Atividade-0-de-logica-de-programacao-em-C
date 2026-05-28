#include <stdio.h>

int main (){
    int numero, numero_inicial;

    printf ("Digite um número para que se calcule sua potencia até a decima potencia:");
    scanf ("%d", &numero);

    numero_inicial = numero;

    while (numero <= numero_inicial * numero_inicial * numero_inicial * numero_inicial * numero_inicial * numero_inicial * numero_inicial * numero_inicial * numero_inicial)
    {
        printf ("%d", numero);

        numero *= numero_inicial;
    }
    
}