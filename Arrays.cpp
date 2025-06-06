#include <iostream>
using namespace std;

int main() {

    //Definimos nuestro arreglo.

    int numbers[4];
    int menor;

    //Le pedimos 4 numero al usuaruo para validarlos.
    cout << "Enter 4 numbers: " <<endl;
    for (int i = 0; i < 4; i++) {
        cin >> numbers[i];
    }

    //Comenzamos a validar y comparar los numeros y encontrar el minimo, comenzando de la posicion 0 osea el primero numero.
    menor = numbers[0];
    for (int i = 1; i < 4; i++) {
        if (numbers[i] < menor) {
            menor = numbers[i];
        }
    }

    cout << "The minimun number is: " << menor << endl;

    return 0;
}











