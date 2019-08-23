#include<iostream>
#include<string.h>
#ifndef JUGADOR_CPP
#define JUGADOR_CPP

using namespace std;

class Jugador{
	
      private:
      	
	   string nombre;
	   string dorsal;
	   string pais;
	   
      public:
      	
        Jugador(){
		}//Fin del constructor de la red
			             
        Jugador(string nombre,string dorsal,string pais){
        	this->nombre.assign(nombre);
			this->dorsal.assign(dorsal);
			this->pais.assign(pais);		              
        }//Fin del constructor sobrecargado
             
        void serNombre(string nombre){
            this->nombre.assign(nombre);
        }//Set del nombre del equipo
             
        string getNombre(){
            return this->nombre;
        }//Get del nombre del equipo
             
        void setDorsal(string dorsal){
            this->dorsal.assign(dorsal);
        }//Set del dorsal del jugador
             
        string getDorsal(){
            return this->dorsal;
        }//Get del dorsal del jugador
        
		void setPais(string pais){
        	this->pais.assign(pais);
        }//Set del pais del jugador
             
        string getPais(){
            return this->pais;
        }//Get del pais del jugador
		              
        void print(){
        	cout<<"Nombre del jugador: "<<nombre<<
        	" Dorsal: "<<dorsal<<
        	" Pais de origen: "<<pais<<endl;
			cout<<"\n\n\n\n";
        }//Fin del metodo print 
        
        ~Jugador(){
		}//Fin del destructor    
};
#endif
