#include <iostream>
using namespace std;

int main (){
	int a, b;
	string F[100], P[100];
	int conteo[100] = {0};
	
	cout << "Ingrese la cantidad de alumnos que hay en FP:";
    cin >> a;
    for (int i = 1; i <= a; i++) {
        cout << "Ingrese el nombre del estudiante " << i << " de FP: "; 
        cin >> F[i];
    }
    
    cout << "Ingrese la cantidad de alumnos que hay en PG:";
    cin >> b;
    for (int i = 1; i <= b; i++) {
        cout << "Ingrese el nombre del estudiante " << i << " de PG: "; 
        cin >> P[i];
    }
    
 	cout << "Los estudiantes repetidos son:\n";
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            if (F[i] == P[j]) {
                conteo[i]++;
            }
        }
    }
    
    for (int i = 1; i <= a; i++) {
        if (conteo [i] > 0){
            cout << F[i] << " se repite " << conteo[i] << " veces";
        }
        else{
    	cout<<"No se repite ningun estudiante";
        }
    }
    return 0;
}