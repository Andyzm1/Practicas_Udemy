#include <stdio.h>
#include <string.h>
int main (void){
    int eda, gms = 0, gsq = 0, gdvms = 0, go = 0; /*grupo menor de 6, grupo de 6 a 15, grupo de 16 a 26 o mas de 65, grupo otro caso*/
    char ver[1];
    struct time
    {
        int hora;
        int minutos;
    };
    struct boleteria
    {
        struct time time1;
        int numeropersonas;
        float preciot;
    };
    struct boleteria bole;
    
    do 
    {
        do
        {
            printf("Ingrese la hora a la que ingreso el grupo\n");
            scanf("%d", &bole.time1.hora);
            if (bole.time1.hora<=0 || bole.time1.hora>24)
            {
                printf("Dato invalido\n");
            }
            
        } while (bole.time1.hora<=0 || bole.time1.hora>24);
        do
        {
            printf("Ingrese el minuto en el que ingreso el grupo\n");
            scanf("%d", &bole.time1.minutos);
            if (bole.time1.minutos<=0 || bole.time1.minutos>60)
            {
                printf("Dato invalido\n");
            }
            
        } while (bole.time1.minutos<=0 || bole.time1.minutos>60);
        do
        {
            printf("Ingrese la cantidad de personas en el grupo\n");
            scanf("%d", &bole.numeropersonas);
            if (bole.numeropersonas<=0)
            {
                printf("Dato invalido\n");
            }
            
        } while (bole.numeropersonas<=0);
        for (int i = 0; i < bole.numeropersonas; i++)
        {
            do
            {
                printf("Ingrese la edad del asistente %d\n", i+1);
                scanf(" %d", &eda);
                if (eda<=0)
                {
                    printf("Edad ingresada no valida");
                }
                
            } while (eda<=0);
            if (eda<6)
            {
                gms = gms + 1;
            }else if (eda>=6 && eda<=15)
            {
                gsq = gsq + 1;
            }else if ((eda>=16 && eda<=26) || eda>65)
            {
                gdvms = gdvms + 1;
            }else{
                go = go +1;
            }           
        }
        bole.preciot = (gms * 0) + (gsq * 5) + (gdvms * 8) + (go * 10);
        if (bole.numeropersonas>=5)
        {
            bole.preciot= bole.preciot*0.9;
            printf("Se le ha aplicado un descuento del 10 porciento por ser un grupo de %d personas\n", bole.numeropersonas);
        }
        printf("El grupo ingreso a las %d:%d\n", bole.time1.hora, bole.time1.minutos);
        printf("El total a pagar seria de $%.2f por las %d personas.\n", bole.preciot, bole.numeropersonas);
        do
        {
        printf("Desea ingresar otro grupo?\n Si(s)\n No(n)\n");
        scanf(" %c", &ver[0]);
        if (ver[0] != 's' && ver[0] != 'n')
        {
            printf("Opcion invalida\n");
        }
        
        } while (ver[0] != 's' && ver[0] != 'n');
        
    } while (ver[0] == 's');
    printf("Gracias por usar el sistema del museo\n");
    return 0;
}