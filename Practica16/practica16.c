#include <stdio.h>
#include <string.h>
int main(void){
    int op, ser, malto, bus=0;
    char jb[100];
    printf("Bienvenido a Spartans\n");
    struct jugador
    {
        char nombre[100];
        int edad;
        float altura;
    };
    struct jugador jugadores[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el nombre del jugador %d\n", i+1);
        scanf(" %s", jugadores[i].nombre);
        do
        {
            printf("Ingrese edad del jugador\n");
            scanf(" %d", &jugadores[i].edad);
            if (jugadores[i].edad<0)
            {
                printf("La edad ingresada no es valida\n");
            }
            
        } while (jugadores[i].edad<=0);
        
        do
        {
            printf("Ingrese la estatura en cm del jugador\n");
            scanf(" %f", &jugadores[i].altura);
            if (jugadores[i].altura<=0)
            {
                printf("La estatura ingresada no es valida\n");
            }
            
        } while (jugadores[i].altura<=0);
    }
    do
    {
        printf("Elija una opcion\n 0.Salir\n 1.Lista de jugadores\n 2.Buscar jugador\n 3.Jugador mas alto\n");
        scanf(" %d", &op);
        switch (op)
        {
        case 0:
            printf("Gracias por usar el sistema de jugadores de spartans\n");
            break;
        case 1:
            for (int i = 0; i < 5; i++)
            {
                printf("Nombre del jugador %d: %s\nEstatura: %.2fm\n", i+1, jugadores[i].nombre, jugadores[i].altura/100);
            }
            break;
        case 2:
            printf("Ingrese el nombre del jugador que desea encontrar\n");
            scanf("%s", jb);
            bus=0;
            for (int i = 0; i < 5; i++)
            {
                ser= strcasecmp(jugadores[i].nombre, jb);
                if (ser==0)
                {
                    printf("Jugador encontrado.\n Mide %.2fm\n Tiene %d años\n", jugadores[i].altura/100, jugadores[i].edad);
                    bus=1;
                }
            }
            if (bus==0)
            {
                printf("El jugador %s no ha sido encontrado en la lista.\n", jb);
            }
            break;
        case 3:
            for (int i = 0; i < 5; i++)
            {
                if (jugadores[i].altura>malto)
                {
                    malto = jugadores[i].altura;
                }
            }
            for (int i = 0; i < 5; i++)
            {
                if (jugadores[i].altura==malto)
                {
                    printf("El jugador mas alto es %s con %.2fm y %d años.\n", jugadores[i].nombre, jugadores[i].altura/100, jugadores[i].edad);
                }
            }
            break;
        default:
        printf("La opcion selecionada no existe\n");
            break;
        }
    } while (op!=0);
    
    return 0;
}