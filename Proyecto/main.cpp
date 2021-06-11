//Daniel Pablos Valenzuela - Cesar Galvez Cruz
//A01252290 - A01252177
//TC1030
//11/06/2021

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <windows.h>
using namespace std;


#include "personaje.h"

int main(){
    int eleccion; 
    int eleccion2; 
    string direccion;
    int loop=1;
    Jugador info;
    Jugador update;
    info.Nombre();
    info.Vida();
    info.Descripcion();
    info.Inventario();
    while (loop == 1){
        printf("Que deseas hacer? \n");
        printf("1. Mostrar tu inventario nuevo. \n");
        printf("2. Moverte por los cuartos. \n"); 
        printf("3. Abandonar el juego. \n");
        cin >>eleccion;
        
            if (eleccion == 1){
                update.InventoryUpd();
            }
            if (eleccion == 2){
                printf("Hacia donde quieres moverte?\n O E SO SE S\n");
                printf("Para regresar al menu anterior: BACK\n");
                cin>>direccion; 
                if (direccion == "BACK"){
                    
                }
                if (direccion == "O"){
                    printf("Has encontrado el cuarto numero 1! \n Encontraste dentro unos lentes...\n Te has regresado al centro del pasillo\n");
                    update.addItemPotion();
                    update.InventoryUpd();
                }
                if (direccion == "E"){
                    printf("Has encontrado el cuarto numero 2! \n Encontraste dentro unos audifonos ... \n Te has regresado al centro del pasillo\n");
                    update.addItemKey();
                    update.InventoryUpd(); 
                }
                if (direccion == "SO"){
                    printf("Has encontrado el cuarto numero 3! \n Encontraste dentro una camisola...\n Te has regresado al centro del pasillo\n");
                    update.addItemCamisola();
                    update.InventoryUpd(); 
                }
                if (direccion == "SE"){
                    printf("Has encontrado el cuarto numero 4! \n Encontraste dentro un arduino...\n Te has regresado al centro del pasillo\n");
                    update.addItemArduino(); 
                    update.InventoryUpd();
                }
                if (direccion == "S"){
                    update.addItemCompu();
                    printf("Has encontrado el cuarto numero 5! \n Encontraste dentro una computadora...con instrucciones para salir. \n Las instrucciones leen lo siguiente: Completa este codigo para abrir la salida! \n Deseas aceptar el desafio? \n 1. Si \n 2. No\n 3. Salir al pasillo \n");
                    cin >>eleccion2; 
                    if (eleccion2 == 1){
                        printf("Felicidades! Has completado el codigo y la salida se ha abierto!");
                        break;
                    }
                    if (eleccion2 == 2){
                        printf("La computadora se ha apagado, y ahora quedaras atrapado para siempre! \n Fin del juego!\n");
                        break;
                    }
                    if (eleccion2 == 3){
                        printf("Te has regresado al centro del pasillo");
                    }
                     
                }
            }
            if (eleccion == 3){
                printf("Vuelva pronto!"); 
                break;

            }
    } 

    return 0;
}
