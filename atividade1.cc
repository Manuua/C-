// Manoela Araújo 
#include <iostream>
#include"math.h"
#include"cstdlib"
using namespace std;

// variable 
char sexo;  string msg;

int main() {
    setlocale (LC_ALL, "Portuguese");
    
   // repetição 
   
repetir: 
     system("clear");
    cout << "Bem Vindo!";

    cout<< "Programa 1: "; 
    cout<< "\n Digite o Sexo (F/M) :";
    cin>> sexo;
    
    if(sexo == 'f'){
        msg = "Você é uma mulher !";
    } else{
        msg ="Você é um Homem ! ";
    };
    
    cout <<msg<<endl ;

    ("sleep(1000)");
    
    
goto repetir;     
    
    return 0;
}