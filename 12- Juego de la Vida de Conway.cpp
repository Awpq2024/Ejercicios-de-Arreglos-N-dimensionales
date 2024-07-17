#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void crearTablero(int tablero[][10]) {
    srand(time(0));

    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            tablero[i][j]=rand()%2;
        }
    }
}
int contarVecinosVivos(int tablero[][10], int fila, int columna){
    int contador = 0;

    int direccionFila[]={-1, -1, -1,
						  0,      0, 
					      1,  1,  1};
					      
    int direccionColumna[]={-1, 0, 1,
							-1,    1, 
							-1, 0, 1};

    for (int i=0;i<8;++i){
        int desplazamientoFila=fila+direccionFila[i];
        int desplazamientoColumna=columna+direccionColumna[i];
        
        if (desplazamientoFila>=0 && desplazamientoFila<10 &&
		    desplazamientoColumna>=0 && desplazamientoColumna<10){
            contador+=tablero[desplazamientoFila][desplazamientoColumna];
        }
    }
    return contador;
}

void calcularSiguienteGeneracion(int tablero[][10], int siguienteTablero[][10]) {
    for (int i=0;i<10;++i){
        for (int j=0;j<10;++j){
            int vecinosVivos=contarVecinosVivos(tablero, i, j);
            
            if (tablero[i][j]==1){
                if (vecinosVivos<2 || vecinosVivos>3){
                    siguienteTablero[i][j]=0;  
                } else {
                    siguienteTablero[i][j]=1; 
                }
            } else {
                if (vecinosVivos==3){
                    siguienteTablero[i][j]=1; 
                } else {
                    siguienteTablero[i][j]=0;
                }
            }
        }
    }
}

void mostrarTableros(int tablero[][10], int siguienteTablero[][10]){
    cout<<"Generacion Inicial \tSiguiente Generacion"<<endl;
    for(int i=0;i<10;++i){
        for(int j=0;j<10;++j){
            cout<<tablero[i][j]<<" ";
        }
        cout<<"\t";
        for(int j=0;j<10;++j){
            cout<<siguienteTablero[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int tablero[10][10];
    int siguienteTablero[10][10];

    crearTablero(tablero);

    calcularSiguienteGeneracion(tablero, siguienteTablero);

    mostrarTableros(tablero, siguienteTablero);

    return 0;
}
