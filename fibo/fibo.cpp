#include <iostream>

using namespace std;
//Serie de Fibonacci.
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }

    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
int main ()
{
    int numero, resultado;
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (numero >=0)
    {

        resultado = fibo(numero);
        cout << "La serie fibo es: " << resultado;
}
return 0;
}
