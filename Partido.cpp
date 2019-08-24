#include<iostream>
#include<string.h>
#include <cstdlib>
#include "Equipo.cpp"
#ifndef PARTIDO_CPP
#define PARTIDO_CPP

using namespace std;

class Partido{
	
      private:
      	
      	Equipo* red;
      	Equipo* blue;
	   
      public:
      	
        Partido(){
        	red =new Equipo();
        	blue=new Equipo();
		}//Fin del constructor de la red
			             
        Partido(Equipo* red,Equipo* blue){
        	this->red=red;
			this->blue=blue;		              
        }//Fin del constructor sobrecargado
             
        void setRed(Equipo*red){
            this->red=red;
        }//Set del primer equipo
             
        Equipo* getRed(){
            return this->red;
        }//Get del primer equipo
             
        void setBlue(Equipo*blue){
            this->blue=blue;
        }//Set del segundo equipo
             
        Equipo* getBlue(){
            return this->blue;
        }//Get del segundo equipo
        
		void jugar(){
			int gol1,gol2;
			
			gol1=(rand()%20);
			gol2=(rand()%20);
			
			red->setPartidosJugados(red->getPartidosJugados()+1);
			blue->setPartidosJugados(blue->getPartidosJugados()+1);
			
			if(gol1>gol2){
				
				cout<<"Gano equipo 1: "<<red->getNombre();
				
				//Partidos gandos y perdidos
				red->setPartidosGanados(red->getPartidosGanados()+1);
				
				blue->setPartidosPerdidos(blue->getPartidosPerdidos()+1);
				
				//Goles a favor y en contra de cada equipo
				red->setGolesAfavor(red->getGolesAfavor()+gol1);
				red->setGolesEncontra(red->getGolesEncontra()+gol2);
				
				blue->setGolesEncontra(blue->getGolesEncontra()+gol1);
				blue->setGolesAfavor(blue->getGolesAfavor()+gol2);
				
				//Diferencia de goles de los quipos
				red->setDiferenciaGoles(red->getGolesAfavor()-red->getGolesEncontra());
				blue->setDiferenciaGoles(blue->getGolesAfavor()-blue->getGolesEncontra());
				
				//Puntos para cada equipo
				red->setPuntos(red->getPuntos()+3);
				blue->setPuntos(blue->getPuntos()+0);
				
			}//If que valida si el equipo 1 gano
		
			if(gol2>gol1){
				
				cout<<"Gano equipo 2: "<<blue->getNombre();
				
				//Partidos gandos y perdidos
				blue->setPartidosGanados(blue->getPartidosGanados()+1);
				red->setPartidosPerdidos(red->getPartidosPerdidos()+1);
				
				//Goles a favor y en contra de cada equipo
				blue->setGolesAfavor(blue->getGolesAfavor()+gol2);
				blue->setGolesEncontra(blue->getGolesEncontra()+gol1);
				
				red->setGolesEncontra(red->getGolesEncontra()+gol2);
				red->setGolesAfavor(red->getGolesAfavor()+gol1);
				
				//Diferencia de goles de los quipos
				red->setDiferenciaGoles(red->getGolesAfavor()-red->getGolesEncontra());
				blue->setDiferenciaGoles(blue->getGolesAfavor()-blue->getGolesEncontra());
				
				//Puntos para cada equipo
				red->setPuntos(red->getPuntos()+0);
				blue->setPuntos(blue->getPuntos()+3);
				
			}//If que valida si el equipo 2 gano
			
			if(gol1==gol2){
				cout<<"Quedaron en empate"<<endl;
				cout<<"Gano equipo 2: "<<blue->getNombre();
				
				//Partidos gandos y perdidos
				blue->setPartidosEmpatados(blue->getPartidosEmpatados()+1);
				red->setPartidosEmpatados(red->getPartidosEmpatados()+1);
				
				//Goles a favor y en contra de cada equipo
				blue->setGolesAfavor(blue->getGolesAfavor()+gol2);
				blue->setGolesEncontra(blue->getGolesEncontra()+gol1);
				
				red->setGolesEncontra(red->getGolesEncontra()+gol2);
				red->setGolesAfavor(red->getGolesAfavor()+gol1);
				
				//Diferencia de goles de los quipos
				red->setDiferenciaGoles(red->getGolesAfavor()-red->getGolesEncontra());
				blue->setDiferenciaGoles(blue->getGolesAfavor()-blue->getGolesEncontra());
				
				//Puntos para cada equipo
				red->setPuntos(red->getPuntos()+1);
				blue->setPuntos(blue->getPuntos()+1);
				
			}//Fin del if que valida si quedaron en empate
			 
		}//Fin del metodo para jugar 
        
        ~Partido(){
		}//Fin del destructor    
};
#endif
