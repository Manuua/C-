//Manoela Araújo 
#include <iostream>
using namespace std;

double a = 10;
double *pta;

double media (double *x, double *y){
    return (*x + *y ) /2;
    
}

int main() {
    pta =&a;
    
    cout<< "O endereço de A eh &a"<< &a << endl;
    cout<< "O endereço de A eh a"<< a << endl;
    cout<< "O endereço de A eh pta"<< pta << endl;
   cout<< "O valor de A eh *pta"<< *pta << endl;
   cout<< "O endereço de memória de pta"<< &pta<<endl;
    cout<< "O endereço de memória de pta"<< *x<<endl;
   double x1 = 10.6;
   double x2 = 5.3;
   
   cout<< "A média é :" << media(&x1 , &x2)<< endl;




    return 0;
}