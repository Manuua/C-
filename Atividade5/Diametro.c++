// Manoela Araújo
#include <iostream>
#include"math.h"
#include"cstdlib"
#include"iomanip"
#include <string>
#define PI 3.14 
using namespace std;


int itemMenu, perimetro, raio , diametro, area ;

int DiametroCalc( int perimetro){
    diametro = perimetro / PI;
    return diametro;
}

int RaioCalc(int diametro, int perimetro){
    diametro = perimetro / PI;
    raio = diametro /2 ; 
    return raio;
}

int areaCalc(int diametro, int perimetro){
    diametro = perimetro / PI;
    raio = diametro /2 ;
    area = raio * raio * PI;
    return area;
}

void printQuestion(){
    cout << "Digite o perímetro : " << endl;
    cin >> perimetro;
}



int main() {
    
Menu:
    system("clear");
  cout << "\n _______ \n";  
  cout << "\n Vamos Calcular 🧮 \n";
  cout << "\n1 Diâmetro \n";
  cout << "2 Raio:\n";
  cout << "3 Area do Circulo:\n";
  cout << "4 sair  \nitem: " << endl;
  cin >> itemMenu;
    
    
switch (itemMenu){

case 1 :
   printQuestion();
   DiametroCalc(perimetro);
    cout << "O diâmetro é "<< diametro<< endl;
     break;
case 2:
    printQuestion();
    RaioCalc(diametro, perimetro);
     cout << "O Raio é : " << raio << endl;
     break;
case 3:
    printQuestion();
    areaCalc(diametro,perimetro);
    cout << " A área  é: " << area << endl;
     break;
     
case 4 :
    cout << "fim de programa !";
    
    return 0;
    
     break;



}
    goto Menu;
}