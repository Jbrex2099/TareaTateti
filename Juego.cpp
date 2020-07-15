//
// Created by ake on 24/6/20.
//

#include "Juego.h"
#include "conio2.h"

Juego::Juego(){
	//cout<<"Bienvenidos al Tateti para PC!!!"<<endl;
	
}

void Juego::play() {
	int turnos = 1;
	while(turnos<10){
	Juego::imprimirCabecera();
	Juego::imprimirTablero();
	Juego::imprimirOpciones();
	Juego::getKey();
	Juego::insertKey(int k, char c);
	Juego::imprimirGanador();
	Juego::imprimirTerminar();
	turnos ++;
	}
}

void Juego::imprimirCabecera() {
	int turnos = 1;
	if (turnos%2==0){
		cout<<"es el turno del jugador 2"<<endl;
	}
	else{
		cout<<"es el turno del jugador 1"<<endl;
	}
	cout<<"seleccione donde colocar una ficha"<<endl;
	turnos++;
}

void Juego::imprimirGanador(bool turno1) {
	cout<<"ha ganado el jugador 1"<<endl;
}

void Juego::imprimirTerminar(bool turno1) {
	cout<<"ha terminado el juego"<<endl;
}

void Juego::imprimirOpciones() {
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

int Juego::getKey(){
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

void Juego::insertKey(int k, char c){
	int turnos = 1;
	Tablero T;
	if (turnos%2==0){
		c = 'X';
	}
	else{
		c = 'O';
	}
	switch(k){
	case 1:
		T.setFichaIn(0,0,c);
		//T.mostrar();
		break;
	case 2:
		T.setFichaIn(0,1,c);
		//T.mostrar();
		break;
	case 3:
		T.setFichaIn(0,2,c);
		//T.mostrar();
		break;
	case 4:
		T.setFichaIn(1,0,c);
		//T.mostrar();
		break;
	case 5:
		T.setFichaIn(1,1,c);
		//T.mostrar();
		break;
	case 6:
		T.setFichaIn(1,2,c);
		//T.mostrar();
		break;
	case 7:
		T.setFichaIn(2,0,c);
		//T.mostrar();
		break;
	case 8:
		T.setFichaIn(2,1,c);
		//T.mostrar();
		break;
	case 9:
		T.setFichaIn(2,2,c);
		//T.mostrar();
		break;
	}
	turnos ++;
}

//bool Juego::checkTateti(){}

//bool Juego::checkTermino(){}

void Juego::imprimirTablero() {
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
