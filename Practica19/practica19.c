#include <stdio.h>
int main (void){
    int num, resultado;
    do
    {
        printf("Ingrese un numero del 1 al 10\n");
        scanf("%d", &num);
        if (num>10 || num<1)
        {
           printf("Numero fuera del rango establecido\n");
        }
        
    } while (num>10 || num<1);
    FILE *archivo;
    archivo = fopen("Tablas.txt", "w+");
    fprintf(archivo, "Tabla del %d\n", num);
    for (int i = 0; i < 11; i++) {
        resultado = num * (i);
        fprintf(archivo, "%d x %d = %d\n", num, i, resultado);
    }

    fclose(archivo);
    
    return 0;
}