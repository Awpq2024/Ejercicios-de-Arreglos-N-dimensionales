#include <iostream>
using namespace std;

void mostrarMatriz(int matriz[][3], int filas, int columnas){
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
}
void buscarValor(int matriz[][3], int filas, int columnas, int valor) {
    bool encontrado;
	cout<<"\nEl valor "<< valor <<" se encuentra en:"<<endl;
	    
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            if(matriz[i][j]==valor){
                cout<<"Fila "<<i<<", Columna "<<j<<endl;
                encontrado=true;
            }
        }
    }
    if (encontrado!=true){
        cout<<"\nEl valor "<<valor<<" no se encuentra en la matriz"<<endl;
    }
}

int main() {
	int valor;
	
    int matriz[3][3]={
        {1, 2, 3},
        {4, 2, 4},
        {8, 2, 1}
    };
    
    cout<<"Matriz:"<< endl;
    mostrarMatriz(matriz, 3, 3);

    cout<<"Ingrese un valor: ";
    cin>>valor;

    buscarValor(matriz, 3, 3, valor);

    return 0;
}
