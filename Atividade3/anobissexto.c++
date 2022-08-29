// Manoela Araújo 
#include <iostream>
#include"math.h"
#include"cstdlib"
#include"iomanip"
#include <string>
using namespace std;

// variable 
int itemMenu ;
int ano; 
 


int main() {
    setlocale (LC_ALL, "Portuguese");
    
// menu 
  cout << "\nMenu de Controle";
  cout << "\n 1 Ler dados de entrada";
  cout << "\n 2 Sair\nitem:";
  cin >> itemMenu;

    
  
 switch (itemMenu) {
      case 1: 
     system("clear");
     
//leitura das variáveis 
    cout << "\n Vamos descobrir se é ano bissexto   \n";
    cout << "Digite o ano : ";
    cin >> ano;
    
  
    
    if (ano %4 == 0 ){
       cout << ano << "é ano bissexto  ";
    }else{ 
       cout << ano <<  "Não é  ano bissexto  ";
    }
    
     
   case 2:
   cout << "Fim do programa! ";
   break;
     
    ("sleep(1000)");
    
}
    return 0;
 }