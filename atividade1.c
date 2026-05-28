//Calculadora de potencias

#include <stdio.h>

int main (){
    int numero, eleva2, eleva3, eleva4, eleva5, eleva6, eleva7, eleva8, eleva9, eleva10;
    numero = 0;

    printf ("Escolha um número para descobrir suas potencias até 10: ");
    scanf ("%d", &numero);

    eleva2 = numero * numero;
    eleva3 = numero * numero * numero;
    eleva4 = numero * numero * numero * numero;
    eleva5 = numero * numero * numero * numero * numero;
    eleva6 = numero * numero * numero * numero * numero * numero;
    eleva7 = numero * numero * numero * numero * numero * numero * numero; 
    eleva8 = numero * numero * numero * numero * numero * numero * numero * numero;
    eleva9 = numero * numero * numero * numero * numero * numero * numero * numero * numero;
    eleva10 = numero * numero * numero * numero * numero * numero * numero * numero * numero * numero;

    printf ("Elevado a 2: %d\n", eleva2);
    printf ("Elevado a 3: %d\n", eleva3);
    printf ("Elevado a 4: %d\n", eleva4);
    printf ("Elevado a 5: %d\n", eleva5);
    printf ("Elevado a 6: %d\n", eleva6);
    printf ("Elevado a 7: %d\n", eleva7);
    printf ("Elevado a 8: %d\n", eleva8);
    printf ("Elevado a 9: %d\n", eleva9);
    printf ("Elevado a 10: %d\n", eleva10);

}