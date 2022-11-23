#include "iostream"
#include "cstdlib"
using namespace std;

struct noLista { 
 int chave; 
 noLista * prox; 
};

noLista * primeiro;

void construtor() { 
 primeiro= NULL; 
 cout << "\nLISTA iniciada!\n"; 
 system("pause"); 
 system("cls");
}

int lerValor();
int lerPos();
int total();
void mostrar();
void remover (int remPos);
bool inserir(int valor, int pos);
bool vazia();

int main() {
 int itemMenu;
 int val_, pos_;

 setlocale(LC_ALL, "Portuguese_Brasil");

 while (true) {
  Menu:
  system("cls");
  cout << "\n1 Inserir dados";
  cout << "\n2 Remover dados";
  cout << "\n3 Exibir dados";
  cout << "\n0 Sair\n";
  cin >> itemMenu;

  switch (itemMenu) {

  case 1:
   system("cls");
   val_ = lerValor();
   pos_ = lerPos();
   inserir(val_, pos_);
   system("pause");
  break;

  case 2:
   system("cls");
   remover(pos_);
   system("pause");
  break;

  case 3:
   system("cls");
   mostrar();
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

int lerValor(){
 int val;
 cout << "Informe o valor: ";
 cin >> val;
 return val;
}

int lerPos(){
 int pos;
 cout << "Informe a posição: ";
 cin >> pos;
 return pos;
}

bool vazia() {if (primeiro == NULL) return true; else return false;}

bool inserir(int valor, int pos) {
 noLista * ant, * temp;  
 ant = NULL; 
 temp = primeiro; 
 int cont = 0; 
 noLista * novoNo = (noLista*) malloc(sizeof(noLista)); // CRIA NOVO NO 

 if (novoNo == NULL || (vazia()== true && pos != 1))  return false; // erro 
   
 novoNo->chave = valor; // configura o valor interno do novo Nó  

 if (pos == 1 && vazia() == 1) {
  novoNo->prox = NULL;
  primeiro = novoNo;  
  return true;
 } 
 else if (pos == 1 && vazia() != 1) {
  novoNo->prox = primeiro;
  primeiro = novoNo; 
  return true;
 }
 else {  
  while (temp!=NULL) { 
   cont ++; 
   if (pos == cont) {  
    novoNo->prox = temp;
    ant->prox = novoNo; 
    return true; 
   }
   ant = temp; 
   temp=temp->prox; 
  } 
 }
 return false;
}

void remover (int remPos) { 
 int pos =0; 
  noLista * temp; 
  temp = primeiro; 
  noLista *ant; 
  ant = NULL;

  while (temp != NULL) { 
    pos ++; 
    if (pos == remPos) {  
      if (pos == 1) primeiro = temp->prox; else ant->prox = temp->prox; 
      free(temp); 
      return; 
    }   
    ant = temp;     
    temp=temp->prox; 
  } 
  cout << "\nPosição não encontrada!\n"; 
  system("pause"); 
} 

void mostrar() {    
  noLista* temp;        
  int pos=0;    
  temp = primeiro;

  system("cls");
  while (temp != NULL ) { 
    pos ++; 
    cout << "\npos (" << pos << ")" << temp->chave << "\n"; 
    temp=temp->prox;  
  }
  free(temp); 
}

int total() { 
  noLista * temp; 
  temp = primeiro; 
  int cont = 0; 

  while (temp != NULL) { 
    cont ++;    
    temp=temp->prox; 
  } 
  return cont; 
}