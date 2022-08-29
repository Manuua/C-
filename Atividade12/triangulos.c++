// Manoela Araújo 
#include <iostream>
#include"math.h"
#include"cstdlib"
#include"iomanip"
#include <string>
using namespace std;

// variable 
float A, B , C  ; 


int main() {
    setlocale (LC_ALL, "Portuguese");

    system("clear");
    cout << "Vamos descobrir o tipo do triângulo  ";
    
    cout<< "\n Digite o primeiro lado :";
    cin>> A ;
    cout<< "\n Digite o segundo lado :";
    cin>> B ;
    cout<< "\n Digite o terceiro lado :";
    cin>> C;
    
    
    if(( A >= (B+ C) || B >=(A+C) || C >= (B+A)) ){
        cout<< (" \n A figura não é um triângulo " ) <<endl ;
        
    }else if (A == B && A== C ) {
        cout <<("\n O triângulo é equilátero ") <<endl ;
    }else if ( (A!=B) && (A!=C) && (B!=C) ){
        cout << ("\n O triângulo é escaleno")<< endl;
    }else (A== B || A == C || B == C  ); {
        cout << ("\n O triângulo é isósceles")<< endl; 
    }

    ("sleep(1000)");
    
    return 0;
}