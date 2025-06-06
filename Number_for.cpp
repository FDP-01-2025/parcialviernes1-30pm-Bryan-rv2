#include <iostream>
using namespace std;

int main (){
    //Pedimos un numero para validarlo y crear su respectiva tabla de multiplicar

    int number;
    cout<< "Enter the number to complete the multiplication table" <<endl;
    cin>> number;

    //Creamos for para realizar las tablas del anterior numero digitado.

    for (int i = 0; i <= 10; i++)
    {
       cout << number <<" x " << i << " = " << number * i <<endl;
    }
     
    return 0;
}

