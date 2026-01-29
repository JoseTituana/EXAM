#include <stdio.h>
#include <string.h>
#include "funciones.h"

void inicializar(Habitacion *h){
    for( int i=0 ; i<TOTAL; i++ ){
        h[i].id=i+1;
        strcpy(h[i].nombre, "Vacia");
        h[i].ocupado=0;
    }
}
void cargar(Habitacion *h){
    FILE *archivo = fopen("habitaciones.bin", "rb");
    
    if(archivo==NULL){
    inicializar(h);
    return;
    }
    fread(h, sizeof (Habitacion), TOTAL, archivo);
    fclose(archivo);
}

void mostrar(Habitacion *h){
    printf("\n ESTADO HABITACIONES");
    for( int i=0 ; i<TOTAL; i++ ){
        printf("Habitacion %d - %s \n", h[i].id,h[i].ocupado ?"Ocupada" : "Disponible");
    }
}

void reservar(Habitacion *h){
    int num;
    printf("ingrese el numero de Habitacion(1-10)\n");
    scanf("%d", &num);
    if(num < 1 || num > TOTAL){
        print("no vlaido \n");
        return;
    }
    Habitacion *hab = &h[num -1]; //puntero
    if (hab ->ocupado ==1){
        printf("Habitacion ocupada \n");
    }else{
        printf("nOMBRE DEL HUESPED: \n");
        scanf("%s", hab-> nombre);
        hab->ocupado = 1;
        printf("exitoso \n");
    }
}
void guardar(Habitacion *h){
    FILE *archivo = fopen("habitacioines.bin", "wb");
     if (archivo == NULL){
        printf("error \n");
        return;
     }
     fwrite(h, sizeof(Habitacion),TOTAL, archivo);
     fclose(archivo);
}