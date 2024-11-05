/*
Crea una función que reciba un entero como parámetro y devuelva un
puntero a un arreglo dinámico de ese tamaño, lleno de números aleatorios.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int* crearArregloDinamico(int n) {
    
    int* arreglo = new int[n];

    
    for (int i = 0; i < n; i++) {
        arreglo[i] = rand() % 100;  
    }
    return arreglo;
}

int main() {
    srand(time(NULL));
    int n;
    cout << "Ingresa el tamaño del arreglo: ";
    cin >> n;

    int* arreglo = crearArregloDinamico(n);

    cout << "Arreglo con " << n << " números aleatorios: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    delete[] arreglo;

    return 0;
}
