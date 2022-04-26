// Manoela Araújo 
#include <iostream>
#include"math.h"
#include"cstdlib"
#include"iomanip"
#include <string>
using namespace std;

// variable 
int itemMenu ;
int n1, n2, n3 , n4  ; 

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
    cout << "\n Vamos descobrir os números que são divisíveis por 2 e 3 \n";
    cout << "Digite o 1  número : ";
    cin >> n1;
    cout << "Digite o 2  número : ";
    cin >> n2;
    cout << "Digite o 3  número : ";
    cin >> n3;
    cout << "Digite o 4  número : ";
    cin >> n4;
    
    
    
    if ( n1 %2== 0   || n1 %3 == 0  ){   
       cout<< n1<< " é divisível por 2 e por 3 \n";
        
    } else{
        cout<<n1<<" não é divisível por 2 e 3 !\n"<<endl;
    }
    if ( n2  %2 == 0 || n2 % 3 == 0 ){   
        
       cout<< n2<< " é divisível por 2 e por 3 \n";
        
    } else{
        cout<< n2<< "\ não é divisível por 2 e 3 !\n"<<endl;
    }
    if ( n3 %2 == 0 || n3 %3 == 0 ){   
       cout<< n3<< " é divisível por 2 e por 3 \n";
        
    } else{
        cout<< n3<<" não é divisível por 2 e 3 !\n"<<endl;
    }
    if ( n4  %2 == 0 || n4  %3 == 0 ){   
       cout<< n4<< " é divisível por 2 e por 3 \n";
        
    } else{
        cout<< n4<<" não é divisível por 2 e 3 !\n"<<endl;
    }
   case 2:
   cout << "Fim do programa! ";
   break;
    ("sleep(1000)");
    
    
    
    return 0;
 }
}