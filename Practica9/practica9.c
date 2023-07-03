#include <stdio.h>
int main (void){
    int alum, nota, aprov = 0, sus = 0;
    printf("Bienvenido al sistema de calificaciones\n");
    do
    {
        printf("Cuantos son los alumnos que desea saber si aprobaron\n");
        scanf("%d", &alum);
        if (alum<=0)
        {
            printf("El numero de alumnos ingresado no es valido\n");
        }
        
    } while (alum<=0);
    for (int i = 0; i < alum; i++)
    {
        do
        {
            printf("Ingrese la calificacion del alumno sin decimales %d\n", i+1);
            scanf("%d", &nota);
        } while (nota<0 || nota>10 );
        if (nota >= 6)
        {
            aprov = aprov + 1;
        }
        else if (nota < 6)
        {
            sus = sus + 1;
        }
    }
    printf("El numero de alumnos aprovados es %d, y el numero de alumnos suspensos es %d.\n", aprov, sus);
    return 0;
}