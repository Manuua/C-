// Manoela Araújo 
#include <iostream>
#include"math.h"
#include"cstdlib"
#include"iomanip"
#include <string>
using namespace std;

// variable 
int itemMenu ;
int n1, n2, n3 , n4 ,temp ; 


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
    cout << "\n Vamos ver os número em ordem crescente   \n";
    cout << "Digite o 1  número : ";
    cin >> n1;
    cout << "Digite o 2  número : ";
    cin >> n2;
    cout << "Digite o 3  número : ";
    cin >> n3;
  
    
    if(n2 > n1)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    if(n3 > n1){
        temp = n1;
        n1 = n3;
        n3 = temp;
    }

    if(n3 > n2){
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
 cout <<n1<<" >= "<<n2<<" >= "<<n3<<endl;

   case 2:
   cout << "Fim do programa! ";
   break;
    ("sleep(1000)");
    
}
    return 0;
 }