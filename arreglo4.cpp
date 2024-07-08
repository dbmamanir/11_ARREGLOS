#include <iostream>

using namespace std;
int A[1000];
void Mul(int a,int b){
    for(int i=1; i<=b;i++){
        A[i]=a*i;
        cout<<A[i]<<" ";
    }
}
int main(){
    int a, b;
    cout<<"Ingrese el multiplo: ";
    cin>>a;
    cout<<"Cantidad de multiplos: ";
    cin>>b;
    Mul(a,b);
    return 0;
}