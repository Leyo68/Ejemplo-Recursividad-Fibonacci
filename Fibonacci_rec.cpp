#include <iostream>
using namespace std;

int a=0, b=1, resul=0, vect[100], i=1;

int fibonacci(int n){
	if(n>=1){
		a=b;
		b=resul;
		resul=a+b;
		vect[i]=resul;
		n--;
		i++;
		fibonacci(n);
	}
	else{
		return 0;
	}
}

 
int main(){
	int num, opc=1;
	setlocale(LC_CTYPE,"Spanish");
	do{
		do{//Se solicita y no avanza hasta que el usuario ingrese un número válido para calcular la serie, mayor a cero
			system("cls");
			cout << "\n\tPrograma que imprime la serie de Fibonacci de manera recursiva.";
			cout << 	"\n\tEl valor que ingrese el usuario sera el número de elementos que contendra la serie.";
			cout << "\n\n\tIngrese el número de elementos de la serie: ";
			cin >> num;
		}
		while(num<1);
	
		vect[0]=0;
		fibonacci(num);//Llamada a la función fibonacci
		system("cls");
		cout <<"\n\n\tSERIE FIBONACCI DE "<<num<<" ELEMENTOS\n\n";
		cout <<"\t";
		for(i=0;i<num;i++){
			cout << vect[i] << ", ";
		}
		
		cout << "\n\n\tDesea repetir ? 1_SI\t0_NO";
		cout << "\n\tIngrese opción: ";
		cin >> opc;
		
	}while(opc==1);
	return 0;
}

