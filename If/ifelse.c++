// Manoela Araújo 
#include <iostream>
#include"math.h"
#include"cstdlib"
#include"iomanip"
#include <string>
using namespace std;

// variable 
int itemMenu ;
int n1, n2, n3 , n4, n5  ; 

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
    cout << "\n Vamos descobrir o maior número digite números diferentes  \n";
    cout << "Digite o 1  número : ";
    cin >> n1;
    cout << "Digite o 2  número : ";
    cin >> n2;
    cout << "Digite o 3  número : ";
    cin >> n3;
    cout << "Digite o 4  número : ";
    cin >> n4;
    cout << "Digite o 5  número : ";
    cin >> n5;
    
    
    
    if ( n1 > n2  && n1 > n3 && n1 > n4 && n1 > n5   ){   
       cout<< n1<< " é o maior número \n";
        
    }  else if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5  ){
        cout<<n2<<" é o maior número !\n"<<endl;
    }else if ( n3 > n1  && n3 > n2 && n3 > n4 && n3 > n5 ){   
        
       cout<< n3<< " é o maior número  \n";
        
    } else if ( n4 > n1 && n4 > n2  && n4 > n3&&  n4 > n5 ) {
        cout<< n4<< "\n é o maior número  !\n"<<endl;
    }else if (n5 > n1 &&  n5 > n2  && n5 > n3 && n5 > n4 ){   
       cout<< n5<< " é o maior número  \n";
        
    } else{
        cout<<" Algo errado digite números diferentes  !\n"<<endl;
    }
    
   case 2:
   cout << "Fim do programa! ";
   break;
    ("sleep(1000)");
    
    
    
    return 0;
 }
}