//
// Created by ake on 24/6/20.
//

#include "Juego.h"
#include "conio2.h"

Juego::Juego(){
	bool comenzar = false;
	cout<<"Bienvenidos al Tateti para PC!!!"<<endl;
	cout<<"Una persona controla al jugador 1, que coloca las fichas con la letra 'O' en el tablero y otra persona controla al jugador 2, que coloca las fichas con la letra 'X' en el tablero"<<endl;
	cout<<"El primero que coloque tres fichas conjuntas es el ganador"<<endl;
	cout<<"Pulse enter para iniciar"<<endl;
	while (comenzar==false){
		if(kbhit()){
			int enter = getch();
			if(enter == 13){
				cout<<"comienza el juego"<<endl<<endl;;
				comenzar = true;
			}
			else{
				cout<<"error, pulse enter para iniciar"<<endl;
			}
		}
	}
	
}

void Juego::play() {

	int turnos = 1;

	imprimirTablero();
	while(turnos<10){
	imprimirCabecera(turnos);
	imprimirOpciones();
	int K=getKey();
	insertKey(K, turnos);
	T.checkTateti();
	//Juego::imprimirGanador();
	//Juego::imprimirTerminar();
	turnos ++;
	}
}



void Juego::imprimirCabecera(int turnos) {
	if (turnos%2==0){
		cout<<"es el turno del jugador 2"<<endl;
	}
	else{
		cout<<"es el turno del jugador 1"<<endl;
	}
	cout<<"seleccione donde colocar una ficha"<<endl;
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

void Juego::insertKey(int K, int turnos){
	char letra = ' ';
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
	turnos ++;
}



void Juego::imprimirTablero() {
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
