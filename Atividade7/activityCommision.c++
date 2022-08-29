//Manoela Araújo

#include <ctime>
#include <iostream>
using namespace std;

int main(){

const string EmployeesName[]= {"Sara Lemes", "Ricardo Jafé"};

const double salary[] = {12000, 10243.20};

const int  ages[]={30,  45};

 for (int i = 0; i< 'ages'; i++){
     
     cout << EmployeesName[i]<<endl;
     cout << "Salário com comissão: " << (salary[i]* 0.1+ salary[i])<< endl;
     cout << "Sua idade é : " << (ages[i]) << endl;
 }

    return 0; 
}