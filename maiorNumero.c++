// Manoela Araújo 
#include <iostream>
#include"math.h"
#include"cstdlib"
#include"iomanip"
#include <string>
using namespace std;

// variable 
float numero1 , numero2, numero3 ; 


int main() {
    setlocale (LC_ALL, "Portuguese");

    system("clear");
    cout << "Vamos descobrir o maior número ";
    
    cout<< "\n Digite o primeiro número :";
    cin>> numero1 ;
    cout<< "\n Digite o segundo número :";
    cin>> numero2 ;
    cout<< "\n Digite o terceiro número :";
    cin>> numero3;
    
    
    if(numero1 > numero2 && numero1> numero3 ){
        cout<< (" \n O maior número é :  " )<< numero1 <<endl ;
    }else if (numero2 > numero1 && numero2 > numero3) {
        cout <<("\n O maior numero é :  ")<<numero2 <<endl ;
    }else if (numero3 > numero1 && numero3 > numero2 ){
        cout << ("\n O maior número é : ")<< numero3<< endl;
    }

    ("sleep(1000)");
    
    return 0;
}