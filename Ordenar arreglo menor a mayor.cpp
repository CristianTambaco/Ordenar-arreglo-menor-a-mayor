#include <iostream>
using namespace std;

void ordenarMenorMayor(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int indiceMinimo = i;
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[indiceMinimo]) {
                indiceMinimo = j;
            }
        }
        swap(a[i], a[indiceMinimo]);
    }
}

int main() {
    int n;
    
    cout << "** Ordenar de menor a mayor ** "<<endl;    
    cout << "Cuantos numeros enteros quieres que tenga el arreglo? ";
    cin >> n;

    int a[n];
    cout << "Ingrese los numeros enteros que van a estar en el arreglo: "<<endl;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    ordenarMenorMayor(a, n);

    cout << "Arreglo ordenado de menor a mayor: ";
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}


