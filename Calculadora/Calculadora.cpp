#include <iostream>

using namespace std;

float numero1;
char a;
float numero2;
float resultado;


int main() {
    cout << "Este programa hace operaciones basicas entre dos numeros."<<endl;
    cout << "Primer numero: ";
    cin >> numero1;
    cout << "Operacion: ";
    cin >> a;
    cout << "Segundo numero: ";
    cin >> numero2;
    if (a == '+') {
        resultado = numero1+numero2;
        cout<< "Resultado: \n" << " " << numero1 << " "<< " " <<  a << " " << " " << numero2 <<" " << " = " << resultado << endl;
    }
    if (a == '-') {
        resultado = numero1-numero2;
        cout<< "Resultado: \n" << " " << numero1 << " "<< " " <<  a << " " << " " << numero2 <<" " << " = " << resultado << endl;
    }
    if (a == '*') {
        resultado = numero1*numero2;
        cout<< "Resultado: \n" << " " << numero1 << " "<< " " <<  a << " " << " " << numero2 <<" " << " = " << resultado << endl;
    }
    if (a == '/') {
        if (numero2==0){
            cout<< "No es posible dividir entre cero."<<endl;
        }
        else {
            resultado = numero1/numero2;
            cout<< "Resultado: \n" << " " << numero1 << " "<< " " <<  a << " " << " " << numero2 <<" " << " = " << resultado << endl;
        }
    }
    if (a == '%') {
        resultado = (int)numero1 % (int)numero2;
        cout<< "Resultado: \n" << " " << numero1 << " "<< " " <<  a << " " << " " << numero2 <<" " << " = " << resultado << endl;
    }
    return 0;
}
