#include <stdio.h>
int main (void){
    char cad[100];
    char car;
    printf("Ingrese una cadena de caracteres\n");
    scanf(" %s", cad);
    printf("Ingrese una letra\n");
    scanf(" %c", &car);
    for (int i = 0; i < 100; i++)
    {
        if (cad[i]==car)
        {
            printf("Se ha encontrado la letra |%c| en la posicion %d de la cadena %s\n", car, i+1, cad);
            break;
        }
        
    }
    return 0;
}