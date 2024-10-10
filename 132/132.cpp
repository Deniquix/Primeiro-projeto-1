#include <iostream>
using namespace std;

int main() {

    float numero, resultado;
    cout << "Digite o numero em metros que vc quer converter em feet: ";
    cin >> numero;

    resultado = numero * (1 / 0.3048);

    cout << numero << " em feet é " << resultado;
    return 0;
}