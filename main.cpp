#include<iostream>
#include <conio.h>
#include "Tablero.h"
#include "Juego.h"


using namespace std;


void mensajeInicio(){
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


		int main (int argc, char *argv[]) {
			Juego J;
			J.play();

			return 0;
		}
		
