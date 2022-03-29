// Atividade Manoela Araújo
#include <iostream>
#include <math.h> // funçoes
#include <string> // var text
using namespace std;// diretiva std


int main() {
    system("clear");
    setlocale (LC_ALL, "Portuguese");
    
// variable 
    float distancia, tempo, velocidade, litros_usados; 
   
   cout<< "Vamos calcular os gastos da viagem : "; 
   cout<< "\n\n Qual o tempo gasto em horas ? :";
   cin>>tempo;
   cout<< "a velocidade média ? ";
   cin>>velocidade;
   
// cálculo
     distancia = tempo*velocidade;
     litros_usados = (distancia / 12);
    
// exibir resultado

    system ("clear");
    cout <<"A velocidade média foi: " << velocidade<<endl ;
    cout <<"O tempo gasto em horas foi: " << tempo << endl;
    cout <<"A distância percorrida foi: " << distancia << endl;
    cout <<"A quantidade de litros utilizados na viagem foi: " << litros_usados<< endl;
  ("sleep(1000)");