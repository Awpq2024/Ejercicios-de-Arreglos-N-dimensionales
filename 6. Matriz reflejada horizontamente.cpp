#include <iostream>
using namespace std;


void mostrarMatriz(int matriz[][6], int filas, int columnas){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
}

void reflejoHorizontal(int matriz[][6], int filas, int columnas){
    for (int i=0;i<filas;i++){
        for (int j=0;j<columnas/2;j++){
            int auxiliar=matriz[i][j];
            matriz[i][j]=matriz[i][columnas-1-j];
            matriz[i][columnas-1-j]=auxiliar;
        }
    }
}

int main() {

    int matriz[6][6]={
        {1, 2, 3, 4, 5, 6},
        {2, 5, 1, 7, 8, 4},
        {3, 2, 1, 3, 1, 3},
        {4, 2, 8, 1, 1, 2},
        {5, 1, 9, 2, 1, 1},
        {6, 7, 8, 9, 1, 0}
    };

    cout<<"Matriz:"<<endl<<endl;
    mostrarMatriz(matriz, 6, 6);
    
    reflejoHorizontal(matriz, 6, 6);

    cout<<"\nMatriz reflejada horizontalmente:"<<endl<<endl;
    mostrarMatriz(matriz, 6, 6);
    
    return 0;
}
