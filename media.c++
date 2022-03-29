// Manoela Araújo 
#include <iostream>
#include"math.h"
#include"cstdlib"
using namespace std;

// variable 
double n1,n2, media;
string status;

int main() {
    setlocale (LC_ALL, "Portuguese");
    
   // repetição 
   
repetir: 
     system("clear");
    cout << "Vamos descobrir a sua média!";

    cout<< "Programa 2: "; 
    cout<< "\n Digite sua nota 1:";
    cin>> n1;
    cout<< "\n Digite sua nota 2:";
    cin>> n2;
    media = (n1+n2)/2;
    
    if(media< 3 ){
        status = "Aluno reprovado !";
    } else if (media >=3 && media <5) {
        status ="Aluno de recuperação ! ";
    }else if (media >=5 && media < 6) {
        status = "Aluno de exame " ;
    }else{
        status="Parabéns Aluno Aprovado";
    }
    
    cout <<"\n A média do aluno foi " <<  media<<endl ;
    cout <<status<<endl ;

    ("sleep(1000)");
    
    
goto repetir;     
    
    return 0;
}