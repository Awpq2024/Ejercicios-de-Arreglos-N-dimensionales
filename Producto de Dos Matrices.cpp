#include <iostream>
using namespace std;

int main(){
	int matriz1[3][3]={
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int matriz2[3][3]={
		{9, 8, 7},
		{6, 5, 4},
		{3, 2, 1}
	};
	int multiplicacion[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
            multiplicacion[i][j]=0; 
            for (int k=0;k<3;k++){
                multiplicacion[i][j]+=matriz1[i][k]*matriz2[k][j];
            }
        }
	}
	cout<<"Matriz resultante de la multiplicacion: \n"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz1[i][j]<<" ";
		}
		if(i==1){
			cout<<"x";
		}
		cout<<"\t";
		for(int j=0;j<3;j++){
			cout<<matriz2[i][j]<<" ";
		}
		if(i==1){
			cout<<"=";
		}
		cout<<"\t";
		for(int j=0;j<3;j++){
			cout<<multiplicacion[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
