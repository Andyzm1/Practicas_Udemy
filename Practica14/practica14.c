#include <stdio.h>
int main (void){
    char cad1[100], cad2[100], cad3[100], cad4[100];
    printf("Ingrese la primera cadena de caracteres\n");
    scanf("%s", cad1);
    printf("Ingrese la segunda cadena de caracteres\n");
    scanf("%s", cad2);
    printf("Ingrese la tercera cadena de caracteres\n");
    scanf("%s", cad3);
    printf("Ingrese la cuarta cadena de caracteres\n");
    scanf("%s", cad4);
    printf("%s - %s - %s - %s", cad1, cad2, cad3, cad4);
    return 0;
}