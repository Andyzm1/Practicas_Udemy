#include <stdio.h>
int main (void){
   int op, dia;
   printf("Bienvenido al sistema de los dias de la semana\n");
   do
   {
    do
    {
        printf("Ingrese un numero del 1 al 7\n");
        scanf(" %d", &dia);
        if (dia>7 || dia<1)
        {
            printf("Dato ingresado fuera de rango\n");
        }
        
    } while (dia>7 || dia<1);
    switch (dia)
    {
    case 1:
        printf("El dia %d es lunes.\n", dia);
        break;
    case 2:
        printf("El dia %d es martes.\n", dia);
        break;
    case 3:
        printf("El dia %d es miercoles.\n", dia);
        break;
    case 4:
        printf("El dia %d es jueves.\n", dia);
        break;
    case 5:
        printf("El dia %d es viernes.\n", dia);
        break;
    case 6:
        printf("El dia %d es sabado.\n", dia);
        break;
    case 7:
        printf("El dia %d es domingo.\n", dia);
        break;
    default:
        printf("El dato ingresado esta fuera del rango.\n");
        break;
    }

    do
    {
        printf("Desea comprobar otro dia\n 1. Si\n 2. No\n");
        scanf("%d", &op);
        if (op==2)
        {
            printf("Gracias por usar el sistema de los dias de la semana\n");
        }
        if (op != 1 && op != 2)
        {
           printf("Opcion inexistente\n");
        }
    } while (op!=2 && op!=1);
    
   } while (op!=2);
   
    return 0;
}