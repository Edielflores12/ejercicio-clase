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

#include <iostream>
using namespace std;

int main() {
    const int MAX_LEVEL = 25;
    const int MIN_LEVEL = 1;
    int currentLevel = 1;
    int targetLevel;
    
    while (true) {
        cout << "Actualmente está en el nivel " << currentLevel << "." << endl;
        cout << "Ingrese el nivel al que desea ir (1-25) o 0 para salir: ";
        cin >> targetLevel;

        if (targetLevel == 0) {
            break;
        }

        if (targetLevel < MIN_LEVEL || targetLevel > MAX_LEVEL) {
            cout << "Nivel inválido. Por favor, ingrese un nivel entre 1 y 25." << endl;
            continue;
        }

        if (targetLevel == currentLevel) {
            cout << "Ya se encuentra en el nivel " << currentLevel << "." << endl;
        } else if (targetLevel > currentLevel) {
            while (currentLevel < targetLevel) {
                cout << "Subiendo... Nivel " << ++currentLevel << endl;
            }
        } else {
            while (currentLevel > targetLevel) {
                cout << "Bajando... Nivel " << --currentLevel << endl;
            }
        }

        cout << "Ha llegado al nivel " << currentLevel << "." << endl;
        if (currentLevel == MIN_LEVEL) {
            cout << "Puede subir." << endl;
        } else if (currentLevel == MAX_LEVEL) {
            cout << "Puede bajar." << endl;
        } else {
            cout << "Puede subir o bajar." << endl;
        }
    }

    cout << "Saliendo del programa de simulación de ascensor." << endl;
    return 0;
}
