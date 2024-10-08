#include <iostream>
#include <vector> // Incluir la cabecera vector

using namespace std;

int main() {
    // Declarar un vector de enteros
    vector<int> arr;

    // Agregar elementos al vector
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);

    // Imprimir los elementos del vector
    cout << "Elementos del vector: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}