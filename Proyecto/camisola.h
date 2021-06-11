//Daniel Pablos Valenzuela - Cesar Galvez Cruz
//A01252290 - A01252177
//TC1030
//11/06/2021
#include <iostream>
#include <string>

#include "Item.h"

using namespace std; 

class Camisola:public Item {
private:
    int CamisolaType;
public:
    Camisola(); 
    Camisola(int, int, string, string, int);
    void use();
    void addItemCamisola();
};
Camisola::Camisola() : Item(){
    CamisolaType = 0;
}

Camisola::Camisola(int g, int l, string n,  string d, int h):Item(){
    CamisolaType = g;
}

void Camisola::use(){
    cout <<"Camisola"<<endl; 
}