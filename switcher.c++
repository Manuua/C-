// Manoela Araújo 
#include <iostream>
#include"math.h"
#include"cstdlib"
#include"iomanip"
#include <string>
using namespace std;

// variable 
int itemMenu ;
float A,B,C , delta, raiz1 ,raiz2 ; 

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
    cout << "\n Vamos fazer equação de 2 grau \n";
    cout << "Digite o Valor De A : ";
    cin >> A;
    cout << "Digite o Valor De B: ";
    cin >> B;
    cout << "Digite o  Valor De C: ";
    cin >> C;
    
//calculo do delta 
    delta =( B*B - 4*A*C);
    
    if (delta >= 0){
        raiz1 = (-B + sqrt(delta))/(2*A);
        raiz2= (-B - sqrt(delta))/(2*A);
        cout<<"A equacao é ': " << A<< "X^2"<< B <<"X + "<< C <<"\n";
        cout<< " O delta é : " << delta << "\n";
        cout<<" As raizes reais sao \n  raiz1 =" <<raiz1<<"\n    e\n  raiz2 = "<<raiz2<<"\n"<<endl;
    }
    else {
        cout<<"Sem solução no conjunto dos números Reais!\n"<<endl;
    }
   case 2:
   cout << "Fim do programa! ";
   break;
    ("sleep(1000)");
    
    
    
    return 0;
 }
}