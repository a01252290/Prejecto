//Daniel Pablos Valenzuela - Cesar Galvez Cruz
//A01252290 - A01252177
//TC1030
//11/06/2021
#include <iostream>
#include <string>

#include "Item.h"

using namespace std; 

class Compu:public Item {
private:
    int CompuType;
public:
    Compu(); 
    Compu(int, int, string, string, int);
    void use();
    void addItemCompu();
};
Compu::Compu() : Item(){
    CompuType = 0;
}

Compu::Compu(int g, int l, string n,  string d, int h):Item(){
    CompuType = g;
}

void Compu::use(){
    cout <<"Compu"<<endl; 
}