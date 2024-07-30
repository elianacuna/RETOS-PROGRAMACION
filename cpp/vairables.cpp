/*
variables:

	int num = 25;
	char name = 'Hola';	
	float num2 = 26.25;
	double num3 = 12.5;
	bool condicion = true;
*/

#include <iostream>

using namespace std;

int opc, sumFor, edad, numWhile, numDoWhile;

void bucle_for();
void bucle_if();
void bucle_while();
void bucle_do_while();
void salir();

int main(){
	
	
	do{
		cout<<"-------------------------------------------------------------------------------"<<endl;
		cout<<"----- 1. Bucle FOR-------------------------------------------------------------"<<endl;
		cout<<"----- 2. Bucle IF--------------------------------------------------------------"<<endl;
		cout<<"----- 3. Bucle WHILE-----------------------------------------------------------"<<endl;
		cout<<"----- 4. Bucle DO WHILE--------------------------------------------------------"<<endl;
		cout<<"----- 5. Salir-----------------------------------------------------------------"<<endl;
		cout<<"----- Elige una opcion---------------------------------------------------------"<<endl;
		cin>>opc;
				
		switch(opc){
		case 1:
			bucle_for();
			break;
		
		case 2:
			bucle_if();
			break;
		
		case 3:
			bucle_while();
			break;
		
		case 4:
			bucle_do_while();
			break;
			
		case 5:
			salir();
			break;
		
		default:
			cout<<"El número que digito no existe"<<endl;
			break;
		}
	}while (opc != 5);
	

}

void bucle_for() {
    int sumFor;
    cout << "Digite un numero" << endl;
    cin >> sumFor;
    cout<<endl;

    for (int i = 0; i < sumFor; i++) {
        cout << i << endl;
    }
}
void bucle_if(){
	cout<<"Digite tu edad para saber si es mayor o menor de edad"<<endl;
	cin>>edad;
	
	if( edad >= 18){
		cout<<"Mayor de edad"<<endl;
	}else{
		cout<<"Menor de edad"<<endl;
	}
	
}

void bucle_while(){
    int numWhile;
    do {
        cout << "Digite un numero positivo" << endl;
        cin >> numWhile;
    } while (numWhile <= 0);

    int i = 0;
    while (i <= numWhile) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    }
}

void bucle_do_while() {
    do {
        cout << "Digite un número entero positivo: " << endl;
        cin >> numDoWhile;
    } while (numDoWhile <= 0);

    int sum = 0;
    int i = 1;

    do {
        if (i % 2 != 0) { 
            sum += i;
        }
        i++;
    } while (i <= numDoWhile);

    cout << "La suma de los números impares desde 1 hasta " << numDoWhile << " es: " << sum << endl;
}

void salir(){
	cout<<"Haz finalizado este menu";
	exit(0);
}








