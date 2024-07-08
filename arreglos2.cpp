#include <iostream>
using namespace std;
int maximo = 100;
//funcion para separar pares e impares
void Separacion (int nu[], int n, int par[], int impar[], int& cap, int& cai){
    cap = 0;
    cai = 0;
    for (int i = 0; i < n; ++i) {
        if (nu[i] % 2 == 0) {
            par[cap] = nu[i];
            cap++;
        } else {
            impar[cai] = nu[i];
            cai++;
        }
    }
}


int main (){
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin>>n;
    int nu[maximo];
    for (int i ; i<n; i++){
        cout<<"ingrese el elemento"<<i+1<<":";
        cin>>nu[i];
    }
    int par[maximo], impar[maximo];
    int cap, cai;

    Separacion (nu, n , par, impar, cap, cai);

    cout<<"Elementos pares:";
    for (int i = 0; i < cap; ++i) {
        cout << par[i] << " "<<endl;
    }
    cout<<"Elementos impares:";
    for (int i = 0; i < cai; ++i) {
        cout << impar[i] << " "<<endl;
    }
    return 0;
}

