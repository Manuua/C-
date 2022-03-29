// Atividade Manoela Araújo
#include <iostream>
#include <math.h> // funçoes
#include <string> // var text
using namespace std;// diretiva std


int main() {
    system("clear");
    setlocale (LC_ALL, "Portuguese");
    
// variable 
    float comprimento,largura, altura, volume; 
   
   cout<< "Vamos Descobrir o volume de uma caixa retangular: "; 
   cout<< "\n Qual o comprimento ? ";
   cin>>comprimento;
   cout<< "\n Qual a largura ? ";
   cin>>largura;
   cout<< "\n Qual a altura ? ";
   cin>>altura;
   
// cálculo
     volume= comprimento * largura * altura ;
    
// exibir resultado

    system ("clear");
    cout <<"O volume é : "<< volume <<endl ;

  ('sleep(1000)');
    
    return 0;
}