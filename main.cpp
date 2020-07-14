#include<iostream>
#include <conio.h>
#include "Tablero.h"


using namespace std;


void imprimirCabecera() {
	cout<<"es el turno del jugador 1"<<endl;
	cout<<"seleccione donde colocar una ficha"<<endl;

}

void imprimirTablero(){
	Tablero T;
	T.setFichaIn(0,0,' ');
	T.setFichaIn(0,1,' ');
	T.setFichaIn(0,2,' ');
	T.setFichaIn(1,0,' ');
	T.setFichaIn(1,1,' ');
	T.setFichaIn(1,2,' ');
	T.setFichaIn(2,0,' ');
	T.setFichaIn(2,1,' ');
	T.setFichaIn(2,2,' ');
	T.mostrar();
}
	
	void imprimirOpciones(){
		cout<<"A1 presione 1."<<endl;
		cout<<"B1 presione 2."<<endl;
		cout<<"C1 presione 3."<<endl;
		cout<<"A2 presione 4."<<endl;
		cout<<"B2 presione 5."<<endl;
		cout<<"C2 presione 6."<<endl;
		cout<<"A3 presione 7."<<endl;
		cout<<"B3 presione 8."<<endl;
		cout<<"C3 presione 9."<<endl;
	}
		int getKey(){
			bool presionar=false;
			int tecla=0;
			while(presionar==false){
			if (kbhit()){
				int ingreso = getch();
				switch(ingreso){
				case '1':
					return tecla = 1;
					presionar=true;
					break;
				case '2':
					return tecla = 2;
					presionar=true;
					break;
				case '3':
					return tecla = 3;
					presionar=true;
					break;
				case '4':
					return tecla = 4;
					presionar=true;
					break;
				case '5':
					return tecla = 5;
					presionar=true;
					break;
				case '6':
					return tecla = 6;
					presionar=true;
					break;
				case '7':
					return tecla = 7;
					presionar=true;
					break;
				case '8':
					return tecla = 8;
					presionar=true;
					break;
				case '9':
					return tecla = 9;
					presionar=true;
					break;
				default:
					
					break;
				}
			}
			}
			return tecla;
		}
			
			void insertKey(int K, int turnos){
				Tablero T;
				char letra;
				if (turnos%2==0){
					letra = 'X';
				}
				else{
					letra = 'O';
				}
				switch(K){
				case 1:
					T.setFichaIn(0,0,letra);
					T.mostrar();
					break;
				case 2:
					T.setFichaIn(0,1,letra);
					T.mostrar();
					break;
				case 3:
					T.setFichaIn(0,2,letra);
					T.mostrar();
					break;
				case 4:
					T.setFichaIn(1,0,letra);
					T.mostrar();
					break;
				case 5:
					T.setFichaIn(1,1,letra);
					T.mostrar();
					break;
				case 6:
					T.setFichaIn(1,2,letra);
					T.mostrar();
					break;
				case 7:
					T.setFichaIn(2,0,letra);
					T.mostrar();
					break;
				case 8:
					T.setFichaIn(2,1,letra);
					T.mostrar();
					break;
				case 9:
					T.setFichaIn(2,2,letra);
					T.mostrar();
					break;
				}
			}
		int main (int argc, char *argv[]) {
			int turnos = 1;
			Tablero T;
			imprimirTablero();
			while (turnos<=9){
				
			imprimirCabecera();

			imprimirOpciones();
			int K = getKey();
			insertKey(K, turnos);
			turnos++;
			}
			return 0;
		}
		
