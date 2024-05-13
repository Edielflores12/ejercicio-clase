#include <iostream>
#include <string>
using namespace std;
    
int main()
{
    string nombre;
    int horas_trabajadas;
    float salario, salario_neto, impuestos;

    
    cout << "Ingrese el nombre del trabajador: ";
    cin >>nombre;

    cout << "Ingrese las horas trabajadas por " << nombre << ": ";
    cin >> horas_trabajadas;

    
    if (horas_trabajadas <= 160) {
        salario = horas_trabajadas * 10;
    } else {
        int horas_normales = 160;
        int horas_extras = horas_trabajadas - 160;
        salario = (horas_normales * 10) + (horas_extras * 10 * 1.5);
    }

    
    if (salario <= 2000) {
        salario_neto = salario;
        impuestos = 0;
    } else if (salario <= 2200) {
        salario_neto = salario * 0.8;
        impuestos = salario * 0.2;
    } else {
        salario_neto = salario * 0.7;
        impuestos = salario * 0.3;
    }

    
    cout << "\nNombre del trabajador: " << nombre << endl;
    cout << "Salario bruto: $" << salario << endl;
    cout << "Impuestos a deducir: $" << impuestos << endl;
    cout << "Salario neto: $" << salario_neto << endl;

    return 0;

}