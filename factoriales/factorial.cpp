#include <iostream>
using namespace std;

int factorial(int n){

 if (n == 0 || n == 1){

 return 1;

} else {
    return n * factorial(n - 1);
   }
}

int main () {

 int numero;

  cout << "ingresa un numero para calcular su factorial" << endl;

   cin >> numero;

  cout << "el factorial de " << numero << endl << "es: " << factorial(numero) << endl;
return 0;
}
