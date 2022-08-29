// Manoela Araújo 
#include <iostream>
#include"math.h"
#include"cstdlib"
#include"iomanip"
#include <string>
using namespace std;

// variable 
float A,B,C , delta, raiz1 ,raiz2 ; 

int main() {
    setlocale (LC_ALL, "Portuguese");
    
   // repetição 
   
repetir: 
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
        cout<<" As raizes reais sao \n  raiz1 =" <<raiz1<<"\n    e\n  raiz2 = "<<raiz2<<"\n"<<endl;
    }
    else {
        cout<<"Nao existem raizes reais\n"<<endl;
    }

    ("sleep(1000)");
    
    
goto repetir;     
    
    return 0;
}