#include<iostream>
#include<string.h>
#include<vector>
#include<bits/stdc++.h>
#inlcude "Jugador.cpp"
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
        
		void setCarrera(string carrera){
        	this->carrera.assign(carrera);
        }//Get de la carrera
             
        string getCarrera(){
            return this->carrera;
        }//Get de la carrera
		
		void setUsuario(string usuario){
            this->usuario.assign(usuario);
        }//Set del usuario
             
        string getUsuario(){
            return this->usuario;
        }//Get del usuario
		          
		void setPassword(string password){
            this->password.assign(password);
        }//Set de la password
             
        string getPassword(){
            return this->password;
        }//Get de la password
				        
		void setRol(string rol){
            this->rol.assign(rol);
        }//Set del rol
             
        string getRol(){
            return this->rol;
        }//Get del rol
		
		void setCursadas(vector<Clase*>cursadas){
            this->cursadas=cursadas;
        }//Set de las clases cursadas
             
        void setClase(Clase*clase){
            this->cursadas.push_back(clase);
        }//Set de una sola clase a cursar
             
        vector<Clase*> getCursadas(){
            return this->cursadas;
        }//Get del vector de las cursadas
        
        void remClase(int p){
        	cursadas.erase(cursadas.begin()+p);
		}//Metodo que remueve una clase cursada		 
		              
        void print(){
        	cout<<"Cuenta: "<<cuenta<<
        	" Nombre de la clase: "<<nombre<<
        	" Carrera: "<<carrera<<
        	" Usuario: "<<usuario<<
        	" Password: "<<password<<
			" Rol: "<<rol<<endl;
			cout<<"Clase cursadas"<<endl;
			for(int i=0;i<cursadas.size();i++){
        		cursadas.at(i)->print();
			}//Fin del for de las computadoras
			cout<<"\n\n\n\n";
        }//Fin del metodo print 
        
        ~Equipo(){
		}//Fin del destructor    
};
#endif
