//Daniel Pablos Valenzuela - Cesar Galvez Cruz
//A01252290 - A01252177
//TC1030
//11/06/2021

#include <iostream>
#include <string>

#ifndef Item_h
#define Item_h

using namespace std; 

class Item {
protected:
    int level;
    string name;
    string description;
    int HP;
    
public:
    Item(); 
    void InventoryUpd();
    void addItemPotion();
    void addItemKey();
    void addItemCompu();
    void addItemArduino();
    void addItemCamisola();
    virtual void use()=0; 
};



Item::Item(){
    level = 0;
    name = "";
    description = "";
    HP = 0;
};


#endif