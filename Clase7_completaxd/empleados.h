#ifndef EMPLEADOS_H_INCLUDED
#define EMPLEADOS_H_INCLUDED

typedef struct
{
    int isEmpty;
    int idEmpleado;
    //-------------------
    char nombres[20];
    char apellido[20];
}Empleado;

int empleados_inicializar(Empleado *arrayEmpleados,int len);
int empleados_mostrar(Empleado *arrayEmpleados,int len);
int empleados_lugarLibre(Empleado *arrayEmpleados,int len,int *pLugarLibre);
int empleados_alta(Empleado *arrayEmpleados,int len,char* msg);
int empleados_baja(Empleado *arrayEmpleados,int len);
int empleados_modificar(Empleado *arrayEmpleados,int len);
int empleados_ordenarNombre(Empleado *arrayEmpleados,int len);


#endif // EMPLEADOS_H_INCLUDED
