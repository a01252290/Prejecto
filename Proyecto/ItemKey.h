//Daniel Pablos Valenzuela - Cesar Galvez Cruz
//A01252290 - A01252177
//TC1030
//11/06/2021
#include <iostream>
#include <string>

#include "Item.h"

using namespace std; 

class Key:public Item {
private:
    int KeyType; //1 key
public:
    Key();
    Key(int, int, string, string, int);
    void use();
    void addItemKey();
};
Key::Key() : Item(){
    KeyType = 0;  
}

Key::Key(int g, int l, string n,  string d, int h):Item(){
    KeyType = g;
}

void Key::use(){
    cout << "Audifonos" <<endl;
}