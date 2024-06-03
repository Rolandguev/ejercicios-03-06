#include <iostream>
using namespace std;

float division(float entero1, float entero2)
{
    float resultado = 0;
    resultado = (entero1 / entero2);

    return resultado;
}

int main()
{

    float n1 = 0, n2 = 0, respuesta = 0;
    n1 = 8;
    n2 = 6;

    respuesta = division(n1, n2);
    cout << "El valor de la division de dos numeros es: " << respuesta << "\n";

    return 0;
}