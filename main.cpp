#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main() {
  cout << "Qual a tecla defeituosa? ";
  char D;
  cin >> D;

  cout << "Qual o valor?\n";
  string valor;
  cin >> valor;
  cin.get(); // retira o "\n" do final da string

  int tam = valor.length();

  char strfinal[200];

  for (int i=0, j=0; i< tam; i++){
    if (valor[i] != D){
      strfinal[j] = valor[i];
      j++;
    }
  }
  long long int valorfinal = 0;
  long long int val = 0;
  long long int mult = 1;


  for (int i=strlen(strfinal)-1; i>=0; i--){
    val = (strfinal[i]-48) * mult;
    //cout << val << endl;
    valorfinal += val;
    mult = mult*10;
  }

  cout << valorfinal << endl;

  
}

