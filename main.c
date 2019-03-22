#include <stdio.h>
#include <stdlib.h>

int pedirMostrarMax();

int main()
{
    if(pedirMostrarMax()==0)
    {
        printf("La operacion finalizo correctamente");
    }
}



int pedirMostrarMax()
{
    int numero=0;
    int max;
    int contador=0;

    do
    {
     printf("ingrese el numero");
     scanf("%d",&numero);

     if(contador==0)
     {
        max=numero;
     }
     else
     {
        if(numero>max)
        {
            max=numero;
        }
     }
     contador ++;
    }while(numero != -1);

    printf("el maximo es: %d \n",max);

    return 0;
}
