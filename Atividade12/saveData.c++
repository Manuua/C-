#include <iostream>
#include <locale.h>
#include "math.h"
#include "string"
#include "cstdlib"
using namespace std;

int const n=4;
string nome[n];
string endereco[n];
string email[n];
int cpf[n];
int telefone[n];

int main() {
 int itemMenu;

 setlocale(LC_ALL, "Portuguese_Brasil");

 while (true) {
  Menu:
  system("cls");
  cout << "\n1 Inserir nome dos funcionários";
  cout << "\n2 Inserir endereço dos funcionários";
  cout << "\n3 Inserir e-mail dos funcionários";
  cout << "\n4 Inserir CPF dos funcionários";
  cout << "\n5 Inserir telefone dos funcionários";
  cout << "\n6 Exibir dados";
  cout << "\n0 Sair\n";
  cin >> itemMenu;

  switch (itemMenu) {

  case 1:
   system("cls");   
   for (int i = 0; i < n ; i++) {  
    cout << "\nInsira o nome dos funcionários:";  
    cin >> nome[i];
   }
   system("pause");
  break;

  case 2:
   system("cls");
 for (int i = 0; i < n ; i++) {   
   cout << "\nInsira o endereço dos funcionários:";   
   cin >> endereco[i];
 }
 system("pause");
    break;

    case 3:
 system("cls");
 for (int i = 0; i < n ; i++) {   
   cout << "\nInsira o e-mail dos funcionários:";  
   cin >> email[i];
 }
 system("pause");
break;

case 4:
 system("cls");
 for (int i = 0; i < n ; i++) { 
 cout << "\nInsira o CPF os funcionários:"; 
 cin >> cpf[i];
 }
 system("pause");
break;

case 5:
 system("cls");
 for (int i = 0; i < n ; i++) { 
 cout << "\nInsira o telefone os funcionários:"; 
 cin >> telefone[i];
 }
 system("pause");
break;

case 6:
 system("cls");
 for(string name : nome) {
 cout << endl << name;
 }
 for(string endr : endereco) {
 cout << endl << endr;
 }
 for(string eml : email) {
 cout << endl << eml;
 }
 for(int c_p_f : cpf) {
    cout << endl << c_p_f;
}
for(int fone : telefone) {
 cout << endl << fone;
}
system("pause");
  break;

  case 0:
system("cls");
cout << "Finalizando programa...";
exit(0);
  break;
  }
 }
 return 0;
}