// Atividade Manoela Araújo
#include <iostream>
#include"math.h"
#include"cstdlib"
#include"iomanip"
#include <string> 
#define PI 3.14  
using namespace std;

int main() {
    system("clear");
    setlocale (LC_ALL, "Portuguese");
    
    cout << "Bem Vindo!";
    // variable 
    float diametro, perimetro, raio, area ;
    
    cout<< "\n Qual o Perimetro ? ";
    cin>> perimetro;
    
    // calculos 
    diametro = perimetro / PI ;
    raio = diametro /2;
    area = raio * raio * PI;
    
    // exibindo resultado na tela

    system ("clear");
    cout <<"A área será : "<< area  <<endl ;

    ("sleep(1000)");
    
    return 0;
}