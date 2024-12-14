#include <iostream>
using namespace std;

int main() {
    const int TAM = 15;
    
    // Ingresar array de 15 posiciones
    int arr[TAM];
    cout << "Ingrese " << TAM << " numeros enteros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cin >> arr[i];
    }
    
    // Calcular promedio de elementos mayores a 100
    double sum = 0;
    int count = 0;
    
    for (int i = 0; i < TAM; i++) {
        if (arr[i] > 100) {
            sum += arr[i];
            count++;
        }
    }
    
    if (count > 0) {
        double promedio = sum / count;
        cout << "Promedio de elementos mayores a 100: " << promedio << endl;
    } else {
        cout << "No hubo elementos mayores a 100 en el array." << endl;
    }
    
    return 0;
}
