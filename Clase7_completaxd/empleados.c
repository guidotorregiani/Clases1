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
    if(empleados_lugarLibre(arrayEmpleados,len,&lugarLibre)==0)
    {
        printf("%s",msg);
        scanf("%s",arrayEmpleados[lugarLibre].nombres);
        printf("%s",msg);
        scanf("%s",arrayEmpleados[lugarLibre].apellido);
        ret=0;
    }
    return ret;
}

int empleados_baja(Empleado *arrayEmpleados,int len)
{
    return 0;
}

int empleados_modificar(Empleado *arrayEmpleados,int len)
{
    return 0;
}

int empleados_ordenarNombre(Empleado *arrayEmpleados,int len)
{
    return 0;
}
