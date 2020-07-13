//
// Created by ake on 24/6/20.
//

#include "Juego.h"
#include "conio2.h"

Juego::Juego(){
	cout<<"Bienvenidos al Tateti para PC!!!"<<endl;
}

void Juego::play() {
	Juego::imprimirCabecera();
	Juego::imprimirTablero();
	Juego::imprimirOpciones();
	Juego::imprimirGanador();
	Juego::imprimirTerminar();
}

void Juego::imprimirCabecera() {
	cout<<"es el turno del jugador 1"<<endl;
	cout<<"seleccione donde colocar una ficha"<<endl;
}

void Juego::imprimirGanador(bool turno1) {
	cout<<"ha ganado el jugador 1"<<endl;
}

void Juego::imprimirTerminar(bool turno1) {
	cout<<"ha terminado el juego"<<endl;
}

void Juego::imprimirOpciones(bool opciones) {
	cout<<"placeholder"<<endl;
	cout<<"placeholder"<<endl;
	cout<<"placeholder"<<endl;
	cout<<"placeholder"<<endl;
	cout<<"placeholder"<<endl;
	cout<<"placeholder"<<endl;
	cout<<"placeholder"<<endl;
	cout<<"placeholder"<<endl;
	cout<<"placeholder"<<endl;
}

int Juego::getKey(){
	if (kbhit()){
		int ingreso = getch();
		switch (ingreso){

		}
		
	}
}

void Juego::insertKey(int k, char c){

}

bool Juego::checkTateti(){}

bool Juego::checkTermino(){}

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
