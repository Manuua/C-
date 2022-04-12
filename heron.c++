//Atividade Manoela Araújo 

#include <iostream>
#include"math.h"
#include"cstdlib"
#include"iomanip"
#include <string> 
using namespace std;

int itemMenu ;
float A,B , C  , heron, area ;


int main() {
    system("clear");
    setlocale (LC_ALL, "Portuguese");
    
  cout << "\nMenu de Controle";
  cout << "\n 1 Ler dados de entrada";
  cout << "\n 2 Sair\nitem:";
  cin >> itemMenu;

// Menu 

      switch (itemMenu) {
      case 1: 
      
    cout<<"BEM VINDO : Vamos calcular a área do triângulo  "<<endl;
    
        
  //leitura dos lados 
  
      cout<<"Digite a medida do lado1  : ";
      cin>>A;
      cout<<"Digite a medida do lado 2 : ";
      cin>>B;
      cout<<"Digite a medida do lado 3 : ";
      cin>>C;
  if ( A< B + C &&  B < A+ C  && C < A + B  ) {
    heron = (A+B+C)/2;
    area = sqrt(heron*(heron-A)*(heron-B)*(heron- C));

    cout<<" É um triângulo e a área dele  é :  "<<area<<endl;
     
  }else {
    cout << "Não é um triângulo é uma figura qualquer de três lados "<< endl;
  }
   break; 
  
  
 case 2 : 
 cout << "Fim do programa! ";
 break;
    
     ("sleep(1000)");
      return 0;
     }
}