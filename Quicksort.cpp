#include<iostream>
#include<locale.h>
#include<iomanip>//LIBRERÍA PARA PODER UTILIZAR: setw

#define T 100 //CAPACIDAD DEL ARREGLO

using namespace std; 
int NumeroDeElementosdelVector, Vector[T];

void Quicksort(int* arr, int izq, int der) 
{
	int i = izq, j = der, tmp; 
	int p = arr[(izq + der) / 2]; 
	while (i <= j){
		while (arr[i] < p) i++; 
	    while (arr[j] > p) j--; 
	    //intercambio
	    if (i <= j){
	    	tmp = arr[i]; 
	        arr[i] = arr[j]; 
	        arr[j] = tmp; 
	        i++; j--; 
	    } 
	} 
	//se comprueba si se cumplió lo anterior
	//de ser asi a nuestra funcion "quicksort" le ponemos los parametros "arr", "izq", "j", "i", "der"
	if(izq < j){
		Quicksort(arr, izq, j); 
	}
	
	if(i < der){
		Quicksort(arr, i, der); 
	}
} 

int main() 
{
	setlocale(LC_CTYPE, "Spanish");
	cout<<"Digita de cuantos elementos quieres que tenga tu vector: ";
	cin>>NumeroDeElementosdelVector;
	cout<<"Digita los elemento de Vector:"<<endl;
	for(int i = 0; i < NumeroDeElementosdelVector; i++){
		cout<<"V["<<i<<"] = ";
		cin>>Vector[i];
	}	
	
	cout<<"Estos son elementos que ingresó..."<<endl;
	for(int i = 0; i < NumeroDeElementosdelVector; i++){
		cout<<Vector[i]<<endl;
	}	
	
	cout<<"Este el es orden ascendentemente..."<<endl;
	Quicksort(Vector, 0, NumeroDeElementosdelVector); 
	for(int i = 1; i <= NumeroDeElementosdelVector; i++){
	 	cout<<Vector[i]<< " "; 
	 } 
	 return 0; 
}
