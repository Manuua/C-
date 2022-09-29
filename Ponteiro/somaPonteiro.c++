//Manoela Araújo 
#include <iostream>
using namespace std;

double x1 = 10.6;
double x2 = 5.3;



double soma (double *x, double *y){
    return (*x + *y );
    
}


int main() {
    
double *ponteiro1;
double *ponteiro2; 
    
    cout << "O endereço do ponteiro1 "<< *ponteiro1<< endl;
 
 cout<< "A soma  é :" << soma(&x1 , &x2)<< endl;





    return 0;
}