#include <stdio.h>
#include "funciones.h"
int main(){
    Habitacion habitaciones[TOTAL];
    int opcion;
    cargar (habitaciones);
    do{
        printf("\n ....MENU....");
        printf(" 1.- Ver estado\n");
        printf(" 2.- Reservar habitacioin\n");
        printf(" 3.- guardar y salir");
        printf(" elija opcion...");
        scanf("%d",opcion);
        switch (opcion)
        {
        case 1:
            mostrar(habitaciones);
            break;
        case 2:
            reservar(habitaciones);
            break;
        case 3:
            guardar(habitaciones);
            printf(" guardado...");
            break;    
        default:
            printf(" no Valido \n");
        } 
        while(opcion != 3);

    }
    return 0;
}