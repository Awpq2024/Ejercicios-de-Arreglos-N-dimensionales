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

void rotarMatriz(int matriz[][4], int filas, int columnas) {
    for (int i=0;i<filas;i++) {
        for (int j=i+1;j<columnas;j++) {
            int auxiliar=matriz[i][j];
            matriz[i][j]=matriz[j][i];
            matriz[j][i]=auxiliar;
        }
	}
    for (int i=0;i<filas;i++){
        for (int j=0;j<columnas/2;j++){
            int auxiliar=matriz[i][j];
            matriz[i][j] = matriz[i][columnas-1-j];
            matriz[i][columnas-1-j]=auxiliar;
        }
    }
}

int main() {

    int matriz[4][4]={
        {1, 2, 3, 4},
        {5, 9, 1, 7},
        {9, 2, 6, 3},
        {4, 3, 9, 5}
    };

    cout<<"Matriz:"<<endl<<endl;
    mostrarMatriz(matriz, 4, 4);
    
    rotarMatriz(matriz, 4, 4);

    cout<<"\nLa Matriz luego de ser rotada 90 grados en sentido horario:"<<endl<<endl;
    mostrarMatriz(matriz, 4, 4);
    

    return 0;
}
