#include <iostream>
using namespace std;


void mostrarMatriz(int matriz[][5], int filas, int columnas){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
}


void recorridoEnEspiral(int matriz[][5], int ordenMatriz){
    int inicioFila=0,  finalFila=ordenMatriz-1;
    int inicioColumna=0, finalColumna=ordenMatriz-1;
    int ruta=0;

    while (inicioFila<=finalFila && inicioColumna<=finalColumna){
        switch(ruta){
            case 0:
                for (int i=inicioColumna;i<=finalColumna;i++){
                    cout<<matriz[inicioFila][i] << " ";
                }
                inicioFila++;
                break;
            case 1:
                for (int i=inicioFila;i<=finalFila;i++){
                    cout<<matriz[i][finalColumna]<<" ";
                }
                finalColumna--;
                break;
            case 2:
                for (int i=finalColumna;i>=inicioColumna;i--){
                    cout<<matriz[finalFila][i]<<" ";
                }
                finalFila--;
                break;
            case 3:
                for (int i=finalFila;i>=inicioFila;i--){
                    cout<<matriz[i][inicioColumna]<<" ";
                }
                inicioColumna++;
                break;
        }
        ruta=(ruta+1)%4;
    }
}


int main() {

    int matriz[5][5]={
        {1, 2, 3, 4, 5},
        {5, 9, 1, 7, 8},
        {9, 2, 6, 3, 9},
        {5, 7, 1, 9, 2},
        {4, 3, 9, 5, 1}
    };

    cout<<"Matriz:"<<endl<<endl;
    mostrarMatriz(matriz, 5, 5);

    cout<<"\nRecorrido en espiral:"<<endl;
    recorridoEnEspiral(matriz, 5);
    
    return 0;
}
