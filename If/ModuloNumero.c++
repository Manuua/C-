// Manoela Araújo 
#include <iostream>
#include"math.h"
#include"cstdlib"
#include"iomanip"
#include <string>
using namespace std;

// variable 
float numero; 


int main() {
    setlocale (LC_ALL, "Portuguese");
    
   // repetição 
   
repetir: 
     system("clear");
    cout << "Vamos descobrir o modulo no número ";
    
    cout<< "\n Digite o número :";
    cin>> numero;
    
    
    if(numero < 0 ){
        numero = numero * (-1);
        cout<< (" \n o módulo do  numero é " )<< numero <<endl ;
    }else{
    cout <<("\n O módulo do numero é ")<<numero<<endl ;
    }

    ("sleep(1000)");
    
    
goto repetir;     
    
    return 0;
}