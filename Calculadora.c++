// Manoela Araújo
#include <iostream>
#include"math.h"
#include"cstdlib"
#include"iomanip"
#include <string>

using namespace std;



int itemMenu ;
int result;
int num1, num2, soma, sub, multi;

int Sum( int num1, int num2){
    result =  num1 + num2;
    return result;
}


int Sub(int num1 , int num2){
    result =  num1 - num2;
    return result;
}


int Mult(int num1 , int num2){
    result =  num1 * num2;
    return result;
}

int Div(int num1 , int num2){
    result = num1/ num2;
    return result;
}
void printQuestion(){
    cout << "Seja bem-vindo a nossa primeira calculadora" << endl;
    cout << "Digite o primeiro numero: " << endl;
    cin >> num1;
    cout << "Digite o segundo numero: " << endl;
    cin >> num2;
}



int main() {
    
Menu:
    system("clear");
  cout << "\n1 Soma \n";
  cout << "2 Subtração:\n";
  cout << "3 multiplicação:\n";
  cout << "4 divisão:\n";
  cout << "5 sair  \nitem: " << endl;
  cin >> itemMenu;
    
    
switch (itemMenu){



case 1 :
   printQuestion();

   Sum(num1,num2);

    cout << "A soma é: "<< result<< endl;

     break;

case 2:

    printQuestion();

    Sub(num1,num2);

    cout << "A subtracao é: " <<result << endl;

     break;

case 3:

    printQuestion();

    Mult(num1, num2);

    cout << " A multiplicação é: " << result << endl;

     break;
     
case 4:

    printQuestion();

    Div(num1, num2);

    cout << "A divisao é: " << result << endl;

     break;

case 5 :

    cout << "fim de programa !";
    
    return 0;
    
     break;



}
    goto Menu;
}