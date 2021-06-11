//Daniel Pablos Valenzuela - Cesar Galvez Cruz
//A01252290 - A01252177
//TC1030
//11/06/2021

#include <iostream>
#include <string>

#include "Item.h"

#include "ItemPotion.h" 
#include "ItemKey.h"  
#include "camisola.h"
#include "arduino.h"
#include "Compu.h"


using namespace std; 

class Jugador{
protected:
    string nombre1;
    string desc;
    int vida;
    string invin;
    vector <Item*> vecItems;  
public:
    Jugador();
    void Nombre();
    void Vida();
    void Descripcion();
    void Inventario();
    void addItemPotion();
    void addItemKey();
    void InventoryUpd();   
    void addItemCamisola();
    void addItemArduino();
    void addItemCompu();   
};


void Jugador::Nombre(){
    cout <<"Su personaje se llama: "<<nombre1<<endl;
}

void Jugador::Vida(){
    cout <<"Tus puntos de vida son: "<<vida<<endl; 
}

void Jugador::Descripcion(){
    cout <<"Contexto de su personaje: "<<desc<<endl;
}

void Jugador::Inventario(){
    cout << "Su inventario inicial: "<<invin<<endl;
}


Jugador::Jugador(){
    nombre1 = "Aldaco";
    vida = 100;
    desc = "Profesor del Tec que intenta salvar su vida \n Te encuentras en la zona neutra.";
    invin = "";
}

void Jugador::addItemPotion(){
    Item *objItems;
    objItems = new Potion();
    vecItems.push_back(objItems);  

}

void Jugador::addItemKey(){
    Item *objItems;
    objItems = new Key();
    vecItems.push_back(objItems);
}

void Jugador::addItemCamisola(){
    Item *objItems;
    objItems = new Camisola();
    vecItems.push_back(objItems);
}

void Jugador::addItemArduino(){
    Item *objItems;
    objItems = new Arduino();
    vecItems.push_back(objItems);
}

void Jugador::addItemCompu(){
    Item *objItems;
    objItems = new Compu();
    vecItems.push_back(objItems);
}

void Jugador::InventoryUpd(){
    cout <<"------ El Nuevo Inventario es : -------"<<endl;
    for (int i=0; i<vecItems.size(); i++){
        vecItems[i]-> use(); 
    }
}


