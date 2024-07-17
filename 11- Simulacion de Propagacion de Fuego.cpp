#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void crearBosque(int bosque[][10]){
    srand(time(0));
    for (int i=0;i<10;++i){
        for (int j=0;j<10;++j){
            bosque[i][j]=rand()%2;
        }
    }
}
void guardarBosqueCreado(int bosqueInicial[][10], int bosque[][10]){
	for (int i=0;i<10;++i){
    	for (int j=0;j<10;++j){
            bosqueInicial[i][j]=bosque[i][j];
        }
    }
}

void mostrarBosque(int bosqueInicial[][10], int bosque[][10]){
	cout << "Bosque inicial:\t\tEstado del bosque despues de la propagacion del fuego:" << endl;
    for (int i=0;i<10;++i) {
        for (int j=0;j<10;++j) {
            cout<<bosqueInicial[i][j]<<" ";
        }
		cout << "\t";
        for (int j = 0; j < 10; ++j) {
            cout << bosque[i][j] << " ";
        }
        cout << endl;
    }
}

void propagarFuego(int bosque[][10]) {
	
    int direccionFila[]={-1, -1, -1,
						  0,      0, 
					      1,  1,  1};
					      
    int direccionColumna[]={-1, 0, 1,
							-1,    1, 
							-1, 0, 1};
							
 	int bosqueAuxiliar[10][10];

    for (int i=0;i<10;++i){
        for (int j=0;j<10;++j){
            bosqueAuxiliar[i][j]=bosque[i][j];
        }
    }


    for (int i=0;i<10;++i){
        for (int j=0;j<10;++j){
            if (bosque[i][j]==0){
                for (int k=0;k<8;++k){
                	
                    int desplazamientoFila=i+direccionFila[k];
                    int desplazamientoColumna=j+direccionColumna[k];
                    
                    if (desplazamientoFila>=0 && desplazamientoFila<10 &&
					    desplazamientoColumna>=0 && desplazamientoColumna<10 &&
						bosqueAuxiliar[desplazamientoFila][desplazamientoColumna]==1){
							
                        bosque[i][j]=1; 
                        break;
                    }
                }
            } else if(bosque[i][j]==1){ 
                bosque[i][j]=2; 
            }
        }
    }
}

int main() {
    int bosque[10][10];
	int bosqueInicial[10][10];
	
    crearBosque(bosque);
    
    guardarBosqueCreado(bosqueInicial, bosque);
    
    propagarFuego(bosque);
    
    mostrarBosque(bosqueInicial, bosque);

    return 0;
}
