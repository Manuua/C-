#include <iomanip>
#include <iostream>
using namespace std;

//What is Class ? 
//It is a user-defined data type, which holds its own data members and member functions,
// which can be accessed and used by creating an instance of that class.

//Class
class Data {
   string name;
   int cpf;
   int phone;
   string address;
   string email;
   
//Whats is Public?
//Access specifiers define how the members (attributes and methods) of a class can be accessed.

  public:
   void saveData();
   void showResult();
};

//Whats is Subrountine?
//multiple lines which you can invoke from there from wherever you like so you can cause it to run wherever you like in your program that means you can reuse it.

// Subroutines

void Data::saveData() {
   cout << "Cadastre 4 Funcionários" << endl ;

   cout << "Digite o nome: ";
   cin >> name;

   cout << "Digite seu CPF: ";
   cin >> cpf;

   cout << "Digite seu endereço: ";
   cin >> address;

   cout << "Digite seu email: ";
   cin >> email;

   cout << "Digite seu telefone: ";
   cin >> phone;

   cout << "Cadastrado com Sucesso" << endl;
}

//void The functions that have no return value have the void type specified as the return parameter

void Data::showResult() {
   cout << "Cadastros Realizados" << endl;
   cout << "CPF: " << cpf << endl;
   cout << "Nome: " << name << endl;
   cout << "Endereço: " << address << endl;
   cout << "Email: " << email << endl;
   cout << "Telefone: " << phone << endl;
}

int main() {
   
   Data users[4];
   const int allRegistration = 2;

   for (int i = 0; i < allRegistration; i++) {
      users[i].saveData();
   }

   cout << "Cadastros Realizados" << endl;
   for (int i = 0; i < allRegistration; i++) {
      users[i].showResult();
   }
}