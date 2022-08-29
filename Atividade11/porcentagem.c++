#include <iostream>
#include <math.h> // funçoes
#include <string> // var text
using namespace std;// diretiva std


int main() {
    system("clear");
    setlocale (LC_ALL, "Portuguese");
    
// variable 
    float valor,taxa , tempo , prestacao; 
   
   cout<< "Vamos calcular o valor da prestação com atraso: "; 
   cout<< "\n Qual o valor da prestacao ? :";
   cin>>valor;
   cout<< "\n Qual a taxa de atraso em porcetagem  ? ";
   cin>>taxa;
   cout<< "\n Quanto tempo de atraso em dias ? ";
   cin>>tempo;
   
// cálculo
     prestacao= valor+((valor*taxa/100)*tempo);
    
// exibir resultado

    system ("clear");
    cout <<"O novo valor da prestação será: "<< prestacao<<endl ;

  ("sleep(1000)");
    return 0;
}