#include <iostream>
#include <cmath>

using namespace std;
int main(){
	float n, s, Pc, cc;
	cout<<"ingrese la cantidad de numeros:";
	cin>>n;
	s = 0;
	cc = 0;
	float A[30];
	for (int i = 0; i < n; i++){
		cout<<"Ingrese el elemento "<<i+1<<":";
		cin>>A[i];
		s = s + A[i];
		if (A[i]==0){
			cc++;
		}
	}
	Pc = (cc/n) * 100;
	cout<<"La sumatoria es:"<<s<<endl;
	cout<<"El porcentaje de valores de cero es:"<<Pc<<"%"<<endl;
	return 0;
}