#include <iostream>
using namespace std;

void verMatrizCuadradoLatino(int orden) {
    int matriz[orden][orden];

    for (int i=0;i<orden;i++){
        matriz[0][i]=i+1;
    }
    for (int i=1;i<orden;i++){
        int auxiliar=matriz[i-1][orden-1];
        for(int j=orden-1;j>0;j--){
            matriz[i][j]=matriz[i-1][j-1];
        }
        matriz[i][0]=auxiliar;
    }
    cout<<"El Cuadrado latino de orden "<<orden<<" generado es :"<<endl;
    for (int i=0;i<orden;i++) {
        for (int j=0;j<orden;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int orden;

    cout<<"Ingrese el orden del cuadrado latino deseado: ";
    cin>>orden;

    verMatrizCuadradoLatino(orden);

    return 0;
}