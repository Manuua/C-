// Manoela Araújo 
#include <iostream>
#include"math.h"
#include"cstdlib"
#include"iomanip"
#include <string>
using namespace std;

// variable 
int itemMenu ;
int local , valor , multa; 
double const taxamulta = 0.02;

//função para leitura
  double lerValor(){
      double valorPrestacao;
       cout << "\n Digite o valor da prestação";
       cin >> valorPrestacao;
       
       return valorPrestacao;
  };
// função para calcular multa   
  double calcMulta ( double valorPrestacao ){    
  return ( valorPrestacao * taxamulta ); 
  }
  
//void 
 void mostrar (double lerValor, double calcMulta) {  
      double valorFinal=( valorPrestacao + Calcmulta) ; 
    cout<<"\nValor a pagar:"<< valorFinal;
    }

int main() {
    setlocale (LC_ALL, "Portuguese");
    double lerValor, calcMulta , ValorFinal;
// menu 
     system("clear");
  cout << "\nMenu de Controle";
  cout << "\n 1 Ler dados de entrada";
  cout << "\n 2 Sair\nitem:";
  cin >> itemMenu;

    
  
 switch (itemMenu) {
      case 1: 
    
  valor = lerValor();
  multa = calcMulta();
  valorFinal= (valorPrestacao,calcMulta);
    
     
   case 2:
   cout << "Fim do programa! ";
   break;
 }
    ("sleep(1000)");
}