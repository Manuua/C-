// Atividade Manoela Araújo
#include <iostream>
#include"math.h"
#include"cstdlib"
#include"iomanip"
#include <string> 
#define velocidadeSom 340   
using namespace std;

int main() {
    system("clear");
    setlocale (LC_ALL, "Portuguese");
    
    cout << "Bem Vindo!";
    // variable 
    float distanciaRaio, tempo;
    
    
    cout<< "Vamos calcular distancia de um raio: "; 
    cout<< "\n Qual o tempo ? :";
    cin>> tempo;
    
    // calculo 
    distanciaRaio = tempo * velocidadeSom;
    
    // exibindo resultado na tela

    system ("clear");
    cout <<"A distância do Raio será: "<< distanciaRaio<<endl ;

    ("sleep(1000)");
    
    return 0;
}