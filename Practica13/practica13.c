#include <stdio.h>
int main (void){
    int habitaciones [3][4] = {{1, 150, 250, 350}, {2, 175, 275, 375}, {3, 200, 300, 400}};
    float baja, media, alta;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j==1)
            {
                baja= baja + habitaciones[i][j];
            }
            else if (j==2)
            {
                media= media + habitaciones[i][j];
            }
            else if (j==3)
            {
                alta= alta + habitaciones[i][j];
            }
            
        } 
    }
    baja = baja / 3;
    media = media / 3;
    alta = alta / 3;
    printf("El promedio de las habitaciones en temporada baja es $%.2f\nEl promedio de las habitaciones en temporada media es $%.2f\nEl promedio de las habitaciones en temporada alta es $%.2f\n", baja, media, alta);
    return 0;
}