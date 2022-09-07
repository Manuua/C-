//manoela Araújo
#include<iostream>
#include<math.h>
#include<cstdlib>
#include<iomanip>
#include <string>

using namespace std;

const int n = 4;

struct ValueStruct{
    int values[n];
};

struct ValueStruct item;

void readValues(){
    int value;

    for(int i = 0; i < n ; i++){
        cout << "Digite o valor do produto" << (i + 1) << endl;
        cin >> value;
        item.values[i] = value;
    }

}

void writeValues(){
    cout << "Primeiro valor multiplicado pelo terceiro" << (item.values[0] * item.values[2]) << endl;
    cout << "Soma do segundo valor com o quarto" << (item.values[1] + item.values[3]) << endl;
}

 int main(){
    setlocale(LC_ALL, "Portuguese");
    bool loop = true;

    while(loop){

        int option;

        cout << "1 - Ler valores" << endl;
        cout << "2 - Mostrar valores" << endl;
        cout << "3 - Sair" << endl;
        cin>> option;

        switch (option){
    case 1:
        readValues();
        break;

    case 2:
         writeValues();
         break;

    case 3:
     cout << "fim de programa !";
    
    return 0;
    
     break;

        }
    }
return 0;


