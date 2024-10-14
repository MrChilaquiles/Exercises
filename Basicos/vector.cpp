#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> tareas(10);
    vector<int> examenes(3, 100);
    vector<string> msj{"lala", "lalo"};
    for (int i = 0; i < examenes.size(); i++) {
        cin >> examenes[i];
    }
    for (int i = 0; i < examenes.size(); i++) {
        cout << examenes[i];
    }
    return 0;
}