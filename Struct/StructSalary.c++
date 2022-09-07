// Manoela Araújo
#include <iostream>
#include"math.h"
#include"cstdlib"
#include"iomanip"
#include <string>

using namespace std;
int itemMenu ;

struct worker{
    double salario;
    double reajuste;
};

struct worker trabalhador; 

void readValues(){
    cout << "Digite o salario do trabalhador: " << endl;
    cin >> trabalhador.salario;
    cout << "Digite o reajuste: " << endl;
    cin >> trabalhador.reajuste;
}

void showValues(){
    cout << "O novo salário é: " << trabalhador.salario + trabalhador.reajuste << endl;
   
}

int main() {
    
Menu:
    system("clear");
  cout << "\n1 Ler Valor \n";
  cout << "2 Mostrar valor:\n";
  cout << "3 sair  \nitem: " << endl;
  cin >> itemMenu;
    
    
switch (itemMenu){



case 1 :
   readValues();
     break;

case 2:

    showValues();

     break;

case 3 :

    cout << "fim de programa !";
    
    return 0;
    
     break;



}
    goto Menu;
}