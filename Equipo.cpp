#include<iostream>
#include<string.h>
#include<vector>
#include<bits/stdc++.h>
#include "Jugador.cpp"
#ifndef EQUIPO_CPP
#define EQUIPO_CPP

using namespace std;

class Equipo{
	
      private:
      	
	   string nombre;
	   string fundacion;
	   vector<Jugador*>jugadores;
	   int p_j;
	   int p_g;
	   int p_e;
	   int p_p;
	   int g_f;
	   int g_c;
	   int d_g;
	   int puntos;
	   
      public:
      	
        Equipo(){
		}//Fin del constructor de la red
			             
        Equipo(string nombre,string fundacion){
        	this->nombre.assign(nombre);
			this->fundacion.assign(fundacion);
			p_j=0;//Partidos jugados
	   		p_g=0;//Partidos gandados
	   		p_e=0;//Partidos empatados
	   		p_p=0;//Partidos perdidos
	   		g_f=0;//Goles a favor
	   		g_c=0;//Goles en contra
	   		d_g=0;//Diferencia de goles
	   		puntos=0;//Puntos por partidos		              
        }//Fin del constructor sobrecargado
             
        void serNombre(string nombre){
            this->nombre.assign(nombre);
        }//Set del nombre del equipo
             
        string getNombre(){
            return this->nombre;
        }//Get del nombre del equipo
             
        void setFundacion(string fundacion){
            this->fundacion.assign(fundacion);
        }//Set del año de fundacion equipo
             
        string getFundacion(){
            return this->fundacion;
        }//Get del año de fundacion del equipo
        
		void setPartidosJugados(int p_j){
        	this->p_j=p_j;
        }//Set de los partidos jugados
             
        int getPartidosJugados(){
            return this->p_j;
        }//Get de los partidos jugados
		
		void setPartidosGanados(int p_j){
            this->p_g=p_g;
        }//Set de los partidos ganados
             
        int getPartidosGanados(){
            return this->p_g;
        }//Get de los partidos gandados
		          
		void setPartidosEmpatados(int p_e){
            this->p_e=p_e;
        }//Set de los partidos empatados
             
        int getPartidosEmpatados(){
            return this->p_e;
        }//Get de los partidos empatados
				        
		void setPartidosPerdidos(int p_p){
            this->p_p=p_p;
        }//Set de los partidos perdidos
             
        int getPartidosPerdidos(){
            return this->p_p;
        }//Get de los partidos perdidos
				        
		void setGolesAfavor(int g_f){
            this->g_f=g_f;
        }//Set de los goles a favor
             
        int getGolesAfavor(){
            return this->g_f;
        }//Get de los goles a favor
        		        
		void setGolesEncontra(int g_c){
            this->g_c=g_c;
        }//Set de los goles en encontra
             
        int getGolesEncontra(){
            return this->g_c;
        }//Get de los goles en contra
        		        
		void setDiferenciaGoles(int g_f){
            this->g_f=g_f;
        }//Set de la diferencia de goles
             
        int getDiferenciaGoles(){
            return this->g_f;
        }//Get de la diferencia de goles
        		        
		void setPuntos(int puntos){
            this->puntos=puntos;
        }//Set de los puntos
             
        int getPuntos(){
            return this->puntos;
        }//Get de puntos
		
		void setJugadors(vector<Jugador*>jugador){
            this->jugadores=jugadores;
        }//Set de las clases cursadas
             
        void setJugador(Jugador*jugador){
            this->jugadores.push_back(jugador);
        }//Set de un solo jugador
             
        vector<Jugador*> getCursadas(){
            return this->jugadores;
        }//Get del vector de los jugadores
        
        void remJugador(int p){
        	jugadores.erase(jugadores.begin()+p);
		}//Metodo que remueve un solo jugador	 
		              
        void print(){
        	cout<<"Nombre del equipo: "<<nombre<<
        	" Anio de Fundacion: "<<fundacion<<
        	" Partidos Jugador: "<<p_j<<
        	" Partidos ganados: "<<p_g<<
        	" Partids Empatados: "<<p_e<<
        	" Partidos Perdidos: "<<p_p<<
        	" Goles a Favor: "<<g_f<<
        	" Goles en contra: "<<g_c<<
        	" Diferencia de goles: "<<d_g<<
        	" Puntos: "<<puntos<<endl;
        	cout<<"Jugadores"<<endl;
        	for(int i=0;i<jugadores.size();i++){
        		jugadores.at(i)->print();
			}//Fin del for de impresion de los jugadores
			cout<<"\n\n\n\n";
        }//Fin del metodo print 
        
        ~Equipo(){
		}//Fin del destructor    
};
#endif
