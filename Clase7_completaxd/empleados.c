#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "empleados.h"


int empleados_inicializar(Empleado *arrayEmpleados,int len)
{
    int i;
    int ret=-1;
    if(arrayEmpleados != NULL && len >= 0)
    {
        for(i=0;i<len;i++)
        {
            arrayEmpleados[i].isEmpty=1;
            ret=0;
        }
    }
    return ret;
}

int empleados_mostrar(Empleado *arrayEmpleados,int len)
{
    int ret=-1;
    int i;
    if(arrayEmpleados != NULL && len >=0)
    {
        for(i=0;i<len;i++)
        {
            if(arrayEmpleados[i].isEmpty==0)
            {
                printf("%s,%s",arrayEmpleados[i].nombres,arrayEmpleados[i].apellido);
                ret=0;
            }
        }
    }
    return ret;
}

int empleados_lugarLibre(Empleado *arrayEmpleados,int len,int *pLugarLibre)
{
    int i;
    int ret=-1;
    if(arrayEmpleados != NULL && len >= 0)
    {
        for(i=0; i<len ; i++)
        {
            if(arrayEmpleados[i].isEmpty==1)
            {
                *pLugarLibre = i;
                ret=0;
                break;
            }
        }
    }
    return ret;
}

int empleados_alta(Empleado *arrayEmpleados,int len,char* msg)
{
    int ret=-1;
    int lugarLibre;
    if(arrayEmpleados != NULL && len >= 0)
    {
        if(empleados_lugarLibre(arrayEmpleados,len,&lugarLibre)==0)
        {
            printf("%s",msg);
            scanf("%s",arrayEmpleados[lugarLibre].nombres);
            printf("%s",msg);
            scanf("%s",arrayEmpleados[lugarLibre].apellido);
            ret=0;
            arrayEmpleados[lugarLibre].isEmpty=-1;
        }
    }
    return ret;
}
int empleados_baja(Empleado *arrayEmpleados,int len)
{
    int ret=-1;
    if(arrayEmpleados != NULL && len >= 0)
    {
        int posicionEmpleado;
        if(utn_getNumber(&posicionEmpleado,"ingrese la posicion de empleado a ser dado de baja","error",0,len,2)!=0)
        {
            printf("el legajo debe ser numerico");
        }
        if(arrayEmpleados[posicionEmpleado].isEmpty==1)
        {
            printf("esa posicion esta vacia");
        }
        else
        {
            arrayEmpleados[posicionEmpleado].isEmpty==1;
            ret=0;
        }
    }
    return ret;
}

int empleados_modificar(Empleado *arrayEmpleados,int len)
{
    int ret=-1;
    int posicionEmpleado;
    if(utn_getNumber(&posicionEmpleado,"ingrese la posicion de empleado a ser dado de baja","error",0,len,2)!=0)
    {
        printf("el legajo debe ser numerico");
    }
    if(arrayEmpleados[posicionEmpleado].isEmpty==1)
    {
        printf("esa posicion esta vacia");
    }
    if(arrayEmpleados != NULL && len >= 0 && arrayEmpleados[posicionEmpleado].isEmpty==-1)
    {
        printf("ingrese el nombre");
        scanf("%s",arrayEmpleados[posicionEmpleado].nombres);
        printf("ingrese el apellido");
        scanf("%s",arrayEmpleados[posicionEmpleado].apellido);
        arrayEmpleados[posicionEmpleado].isEmpty=-1;
        ret=0;
    }
    return ret;
}



int empleados_ordenarNombre(Empleado *arrayEmpleados,int len)
{
    return 0;
}
