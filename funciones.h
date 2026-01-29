#ifndef FUNCIONES_H
#define FUNCIONES_H
#define TOTAL 10

typedef struct
{
    int id;
    char nombre [50];
    int ocupado;
}Habitacion;
void inicializar(Habitacion *h);
void cargar(Habitacion *h);
void mostrar(Habitacion *h);
void reservar(Habitacion *h);
void guardar(Habitacion *h);
#endif