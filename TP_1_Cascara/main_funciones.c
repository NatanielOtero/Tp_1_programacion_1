#include <stdio.h>
#include "funciones.h"

int total(int operando1, int operando2)
{
    int resultado;

    resultado = operando1 + operando2;

    printf("\n El resultado de la suma es:%d",resultado);
    printf("\n------------------------------------");

    return 0;

}
int substraccion(int operando1, int operando2)
{
    int resultado;

    resultado = operando1 - operando2;

    printf("\n El resultado de la resta es:%d",resultado);
    printf("\n------------------------------------");

    return 0;

}
int multiplication(int operando1, int operando2)
{
    int resultado;

    resultado = operando1 * operando2;

    printf("\n El resultado de la multiplicacion es:%d",resultado);
    printf("\n------------------------------------");

    return 0;

}
float divide (float operando1, float operando2)
{
    float resultado;

    while(operando2 == 0)
    {
        printf("\n ERROR MATEMATICO,ingrese un divisor distinto de 0: ");
        scanf("%f",&operando2);
    }

    resultado = operando1 / operando2;

    printf("\n El resultado de la division es:%f",resultado);
    printf("\n------------------------------------");

    return 0;
}
int factorial(int operando1)
{
    int cont,fact=1;

    for(cont = 1;cont <= operando1;cont++)
    {
        fact = fact * cont;
    }

    printf("\nEl factorial de: %d es: %d",operando1,fact);
    printf("\n------------------------------------");

    return 0;
}


