#include <stdio.h>
int main (void){
    int op, nivel=0, nota;
    printf("Bienvenido al sistema de calificaciones\n");
    do
    {
        do
        {
            printf("Ingrese la calificacion sin decimales que desea comprobar\n");
            scanf("%d", &nota);
            if (nota<0 || nota>10)
            {
                printf("Calificacion invalida\n");
            }
        } while (nota<0 || nota>10);
        if (nota>=9)
        {
            nivel=5;
        }else if (nota>=7 && nota<=8)
        {
            nivel=4;
        }else if (nota==6)
        {
            nivel=3;
        }else if (nota==5)
        {
            nivel=2;
        }else if (nota<5)
        {
            nivel=1;
        }
        
        switch (nivel)
        {
        case 1:
            printf("Con su calificacion de %d ha suspendido.\n", nota);
            break;
        case 2:
            printf("Con su calificacion de %d ha sacado un suficiente.\n", nota);
            break;
        case 3:
            printf("Con su calificacion de %d ha sacado un bien.\n", nota);
            break;
        case 4:
            printf("Con su calificacion de %d ha sacado un notable\n", nota);
            break;
        case 5:
            printf("Felicitaciones con su calificacion de %d ha sacado un sobre saliente\n", nota);
            break;
        default:
            printf("Su calificacion es invalida\n");
            break;
        }
      do
      {
        printf("Desea revisar otra calificacion\n 1. Si\n 2. No\n");
        scanf("%d", &op);
      } while (op != 1 && op !=2);      
    } while (op != 2);
    printf("Gracias por usar el sistema de calificaciones.\n");
    return 0;
}