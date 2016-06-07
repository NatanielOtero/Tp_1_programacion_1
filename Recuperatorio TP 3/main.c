#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define M 100



int main()
{
    EMovie movie[M];

     FILE *f;
     f=fopen("bin.dat","rb+");
     if(f==NULL)
        {
            f=fopen("bin.dat","wb+");
        }


    char seguir='s';
    int opcion=0,flag=0,flag2=0;







            while(seguir=='s')
                {
                    printf("1- Agregar pelicula\n");
                    printf("2- Borrar pelicula\n");
                    printf("3- Modificar pelicula\n");
                    printf("4- Generar pagina web\n");
                    printf("5- Salir\n");

                    scanf("%d",&opcion);

                        switch(opcion)
                        {
                            case 1:
                                    if(flag2<M)
                                    {
                                        agregarPelicula(movie,f);
                                        flag=1;
                                        flag2++;
                                        break;
                                    }
                                    else
                                    {
                                        printf("Error,solo se permite cargar 100 peliculas\n");
                                        break;
                                    }
                            case 2:
                                    if(flag==1)
                                    {
                                        borrarPelicula(movie,f);
                                        break;
                                    }
                                    else
                                    {
                                        printf("No se realizo la carga\n");
                                        break;
                                    }
                            case 3:
                                    if(flag==1)
                                    {
                                        modificar(movie,f);
                                        break;
                                    }
                                    else
                                    {
                                        printf("No se realizo la carga\n");
                                        break;
                                    }
                               break;
                            case 4:
                                    if(flag==1)
                                    {
                                        generarPagina(movie,"index.html");
                                        break;
                                    }
                                    else
                                    {
                                        printf("No se realizo la carga\n");
                                        break;
                                    }

                            case 5:
                                    seguir = 'n';
                                    break;
                            default:
                                    printf("Opcion invalida\n");
                                    break;
                        }
                }


        fclose(f);
        return 0;
    }


