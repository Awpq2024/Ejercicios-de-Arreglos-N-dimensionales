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

void intercambiarFilas(int matriz[][4], int ordenMatriz){
	int fila1, fila2;
	bool verificar=true;
	
	do{
    cout<<"Ingrese el numero fila quiere intercambiar (del 0 al 3): ";
    cin>>fila1;

    cout<<"Ingrese el numero fila quiere intercambiar (del 0 al 3): ";
    cin>>fila2;

    if (fila1<0 || fila1>=4 || fila2<0 || fila2>=4){
        cout<<"\nUno de los numeros  de fila que ingreso no existe, ingrese numeros del 0 al 3\n"<<endl;
		verificar=true;  
    } else{
    	verificar=false;
	}
	}while(verificar);
    
    for(int j=0;j<ordenMatriz;j++){
        int auxiliar=matriz[fila1][j];
        matriz[fila1][j]=matriz[fila2][j];
        matriz[fila2][j]=auxiliar;
    }
}

int main() {
    int matriz[4][4]={
        {1, 2, 3, 5},
        {5, 2, 6, 8},
        {1, 7, 3, 5},
        {8, 1, 5, 4}
    };

    cout<<"Matriz original:"<<endl;
    mostrarMatriz(matriz, 4, 4);

    intercambiarFilas(matriz, 4);

    cout<<"\nMatriz luego del intercambio de filas:"<<endl;
    mostrarMatriz(matriz, 4, 4);

    return 0;
}
