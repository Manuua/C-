#include <iostream>
#include <math.h>
#include <string>
#include"cstdlib"
#include"iomanip"


using namespace std;

const double juros = 0.02;
int linha = -1;
string valorprincipal [5];
int dias [5];


string lerValor()

{
    system("cls");
    string valorprincipal;

    cout << "\nDigite o valor principal: ";

    cin.ignore();

     getline(cin, valorprincipal);

     return valorprincipal;

}

int lerDias()

{
    int dias;

    cout << "Digite a quantidade de Dias em atraso: ";

    cin >> dias;

    return dias;

}


void novaLinha (string valprincipal, int dia, double valpagar)
{
    linha ++;
    string valprincipal_;
    valprincipal_ = valprincipal;

    valorprincipal[linha] = valprincipal_;
    dias[linha] = dia;
    // valorpagar[linha] = valpagar;
}

void mostrar ()
{

    for(int i = 0; i <= linha; i++)

    {
        cout << endl << "\nValor principal é: " << valorprincipal[i] ;

        cout << "\nDias em atraso: " << dias[i] << endl; 

        cout << "\nValor a pagar é: " << valorprincipal[i]*juros;
    }

  Sleep(10000);  system("cls");       }


int main()
{
setlocale (LC_ALL, "Portuguese");

    string valorprincipal_;
    int dias_;
    double valorpagar_;

    int tecla;

     MENU:
    system("cls");
    cout << "* Menu *\n\n1 ler\n2 exibir\n3 sair\n\nitem: ";
    cin >> tecla;

    switch (tecla)
{
case 1:
    valorprincipal_ = lerValor();
    dias_ = lerDias();
    novaLinha (valorprincipal_ , dias_ );
    break;

case 2:
    mostrar ();
    break;

case 3:
    break;
}

goto MENU;

    return 0;
}