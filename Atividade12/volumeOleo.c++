// Atividade Manoela Araújo
#include <iostream>
#include <math.h> // funçoes
#include <string> // var text
using namespace std;// diretiva std
#define pi 3.14 // constante


int main() {
    system("clear");
    setlocale (LC_ALL, "Portuguese");
    
// variable 
    float volume , raio , altura; 
   
   cout<< "\n Vamos calcular volume do óleo: "; 
   cout<< "\n \n Digite o valor do raio :";
   cin>>raio;
   cout<< "Digite o valor da altura:";
   cin>>altura;
   
// cálculo
     raio=pow(raio, 2 ) ;
     volume =  pi * raio * altura ;
    
// exibir resultado

    system ("clear");
   cout << "\n\n O volume do óleo é  : " << volume<< endl;

   ("sleep(1000)");
    return 0;
}