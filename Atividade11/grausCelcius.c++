// Atividade Manoela Araújo
#include <iostream>
#include <math.h> // funçoes
#include <string> // var text
using namespace std; // diretiva std

int main() {

    system("clear");
    setlocale (LC_ALL, "Portuguese" );

// variable
    float Fahrenheit , Celsius;

    cout<<"\n \n Vamos converter graus Celsius para Fahrenheit";
    cout<<"\n\n Digite a temperatura em em graus Celsius:";
    cin>>Celsius;
    
// cálculo
    Fahrenheit = (9 *Celsius + 160) / 5 ;

// exibir resultado

system ("clear");

    cout << "\n \n A temperatura em Fahrenheit é:"<< Fahrenheit << endl;

   
   ("sleep(1000)");

    return 0;
    
}