// Atividade Manoela Araújo 

#include <iostream>
#include"math.h"
#include"cstdlib"
#include"iomanip"
#include <string> 
using namespace std;

float NumLados, MedLado;
int itemMenu ;
float lado1 , heron, area , apotema ;


int main() {
    system("clear");
    setlocale (LC_ALL, "Portuguese");
    
  cout << "\nMenu de Controle";
  cout << "\n 1 Ler dados de entrada";
  cout << "\n 2 Sair\nitem:";
  cin >> itemMenu;


      switch (itemMenu) {
      case 1: 
      
    cout<<"BEM VINDO : Vamos calcular área do polígono Regular "<<endl;
    cout<<"Digite a quantidade de lados do polígono  : ";

    cin>>NumLados;

// Caso não seja polígono 

    if (NumLados < 3 || NumLados >5 ){
       cout<<"Erro : Poligono não identificado.";
       
// condições que definem o polígono       

  } else if ( NumLados == 3 ){
      
    cout<<"Vamos calcular área do Triângulo "<<endl;

    cout<<"Digite A medida dos lados : ";
    cin>>lado1;

    heron = (lado1+lado1+lado1)/2;
    area = sqrt(heron*(heron-lado1)*(heron-lado1)*(heron-lado1));

    cout<<"A área do triângulo é :  "<<area<<endl;
    
  }else if (NumLados == 4 ){
      cout<<"Vamos calcular área do Quadrado  "<<endl;
      
      cout<<"Digite a medida dos lados : ";
      cin>>lado1;
      
      area =  pow(lado1, 2);
      cout<<"A área do quadrado é :  "<<area<<endl;
      
  }else if (NumLados == 5 ){
      cout<<"Vamos calcular área do Pentágono Regular   "<<endl;
      
     cout<<"Digite a apótema : ";
     cin>>apotema;

     cout<<"Digite a medida dos lados  :";
     cin>>lado1;
    
     area = NumLados * ((lado1*apotema) /2);
     cout<<"A área do Pentágono Regular é :  "<<area<<endl;
     }
    break; 
 
 case 2 : 
 cout << "Fim do programa! ";
    
   }   ("sleep(1000)");
      return 0;

}