//Daniel Pablos Valenzuela - Cesar Galvez Cruz
//A01252290 - A01252177
//TC1030
//11/06/2021
#include <iostream>
#include <string>

#include "Item.h"

using namespace std; 

class Potion:public Item {
private:
    int PotionType; //todo tipo de Potions
public:
    Potion(); 
    Potion(int, int, string, string, int);
    void use();
    void addItemPotion();
};
Potion::Potion() : Item(){
    PotionType = 0;
}

Potion::Potion(int g, int l, string n,  string d, int h):Item(){
    PotionType = g;
}

void Potion::use(){
    cout <<"Lentes"<<endl; 
}