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

void sumaDiagonalesCuadrada(int matriz[][4],int ordenMatriz){
    int sumaDiagonalPrincipal=0;
    int sumaDiagonalSecundaria=0;
    
    for (int i=0;i<ordenMatriz;i++){
        sumaDiagonalPrincipal+=matriz[i][i];
        sumaDiagonalSecundaria+=matriz[i][ordenMatriz-i-1];
    }
    int suma=sumaDiagonalPrincipal+sumaDiagonalSecundaria;
    
    cout<<"\nLa suma de los elementos de las dos diagonales de la matriz es: "<<suma<<endl;
}

int main() {
	int suma;
    int matriz[4][4]={
        {1, 2, 3, 5},
        {5, 2, 6, 8},
        {1, 7, 3, 5},
        {8, 1, 5, 4}
    };

    cout<<"Matriz:"<<endl;
    mostrarMatriz(matriz, 4, 4);
    
	sumaDiagonalesCuadrada(matriz, 4);

    return 0;
}