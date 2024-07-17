#include <iostream>
using namespace std;


void mostrarMatriz(int matriz[][4], int filas, int columnas){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
}

void encontrarMaximo(int matriz[][4], int filas, int columnas, int& maximoValor, int& maximaFila, int& maximaColumna) {
    maximoValor=matriz[0][0];
    maximaFila = 0;
    maximaColumna = 0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] > maximoValor) {
                maximoValor = matriz[i][j];
                maximaFila = i;
                maximaColumna = j;
            }
        }
    }
}

void encontrarMinimo(int matriz[][4], int filas, int columnas, int& minimoValor, int& minimaFila, int& minimaColumna) {
    minimoValor=matriz[0][0];
    minimaFila = 0;
    minimaColumna = 0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] < minimoValor) {
                minimoValor = matriz[i][j];
                minimaFila = i;
                minimaColumna = j;
            }
        }
    }
}

int main() {
	int maximoValor, minimoValor;
    int maximaFila, maximaColumna;
    int minimaFila, minimaColumna;
    
    int matriz[4][4]={
        {1, 2, 3, 4},
        {5, 5, 6, 7},
        {8, 2, 6, 3},
        {2, 3, 9, 5}
    };

    cout<<"Matriz:"<<endl;
    mostrarMatriz(matriz, 4, 4);
    
    encontrarMaximo(matriz, 4, 4, maximoValor, maximaFila, maximaColumna);
    encontrarMinimo(matriz, 4, 4, minimoValor, minimaFila, minimaColumna);
    
	cout<<"\nEl valor maximo es "<<maximoValor<<" y esta en la fila"<< maximaFila << ", y la columna "<<maximaColumna<<endl;
    cout<<"El valor minimo es "<<minimoValor<<" y esta en la fila"<< minimaFila << ", y la columna "<<minimaColumna<<endl;

    return 0;
}
