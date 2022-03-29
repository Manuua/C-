// Manoela Araújo 
#include <iostream>
#include"math.h"
#include"cstdlib"
#include"iomanip"
#include <string>
using namespace std;

// variable 
float n1,n2, diferenca;
string msg; 


int main() {
    setlocale (LC_ALL, "Portuguese");
    
   // repetição 
   
repetir: 
     system("clear");
    cout << "Vamos descobrir a diferença entre os  números ";
    
    cout<< "\n Digite o primeiro número :";
    cin>> n1;
    cout<< "\n Digite o segundo número :";
    cin>> n2;
    
    if(n1 > n2 ){
        diferenca= (n1 - n2);
    } else if (n2 > n1 ) {
        diferenca = (n2-n1);
    }else{
       cout<<( msg= "Os números são iguais");
    }
    
    cout <<"\n A diferença entre os números é "<<  diferenca<<endl ;


    ("sleep(1000)");
    
    
goto repetir;     
    
    return 0;
}