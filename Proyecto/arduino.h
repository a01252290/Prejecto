//Daniel Pablos Valenzuela - Cesar Galvez Cruz
//A01252290 - A01252177
//TC1030
//11/06/2021
#include <iostream>
#include <string>

#include "Item.h"

using namespace std; 

class Arduino:public Item {
private:
    int ArduinoType;
public:
    Arduino(); 
    Arduino(int, int, string, string, int);
    void use();
    void addItemArduino();
};
Arduino::Arduino() : Item(){
    ArduinoType = 0;
}

Arduino::Arduino(int g, int l, string n,  string d, int h):Item(){
    ArduinoType = g;
}

void Arduino::use(){
    cout <<"Arduino"<<endl; 
}