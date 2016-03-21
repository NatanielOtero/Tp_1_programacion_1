#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int operando1,operando2;

    while(seguir=='s')
    {
        printf("\n1- Ingresar 1er operando (A=x)\n");
        printf("\n2- Ingresar 2do operando (B=y)\n");
        printf("\n3- Calcular la suma (A+B)\n");
        printf("\n4- Calcular la resta (A-B)\n");
        printf("\n5- Calcular la division (A/B)\n");
        printf("\n6- Calcular la multiplicacion (A*B)\n");
        printf("\n7- Calcular el factorial (A!)\n");
        printf("\n8- Calcular todas las operacione\n");
        printf("\n9- Salir\n");

        scanf("%d",&opcion);
        system("cls");

        switch(opcion)
        {
            case 1:
                printf("Ingresar 1er operando: ");
                scanf("%d",&operando1);
                break;
            case 2:
                printf("\nIngresar 2do operando: ");
                scanf("%d",&operando2);
                break;
            case 3:
                system("cls");
                total(operando1,operando2);
                break;
            case 4:
                system("cls");
                substraccion(operando1,operando2);
                break;
            case 5:
                system("cls");
                divide(operando1,operando2);
                break;
            case 6:
                system("cls");
                multiplication(operando1,operando2);
                break;
            case 7:
                system("cls");
                factorial(operando1);
                break;
            case 8:
                system("cls");
                total(operando1,operando2);
                substraccion(operando1,operando2);
                divide(operando1,operando2);
                multiplication(operando1,operando2);
                factorial(operando1);
                factorial(operando2);
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }


    return 0;


}
