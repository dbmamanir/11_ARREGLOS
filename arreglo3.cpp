#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    string Dia[8]={ "vacio", "Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
    double tem, temedio, temenor, Max[8], Min[8];
    
    for(int i=1;i<=7;i++){
    cout<<"La temperatura del dia "<<Dia[i]<<": "<<endl;
    cout<<"Temperatura minima:"; 
    cin>>Min[i];
    cout<<"Temperatura maxima:"; 
    cin>>Max[i];
    system("cls");
    }
    
     for(int i=1;i<=7;i++){
    cout<<"La temperatura media del "<<Dia[i]<<" es: ";
    temedio=(Min[i]+Max[i])/2; 
    cout<<temedio<<endl; 
    if(Min[i]<Min[i+1]){
        temenor=Min[i];
    }
    }
    
    cout<<"La menor temperatura es: "<<temenor<<endl;
    system ("pause");
    system ("cls");
    
    cout<<"Ingrese una temperatura que crea maxima: "; 
    cin>>tem;
    cout<<"Los dias que hay una temperatura maxima de "<<tem<<" es:"<<endl;
    for(int i=1;i<=7;i++){  
    if(tem==Max[i]){
         cout<<Dia[i]<<endl; 
    }
    }
    return 0;
}
