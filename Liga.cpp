#include<iostream>
#include<string.h>
#include<vector>
#include<bits/stdc++.h>
#include"Equipo.cpp"
#ifndef LIGA_CPP
#define LIGA_CPP

using namespace std;

class Liga{
	
      private:
      	
	   string nombre;
	   string pais;
	   vector<Equipo*>equipos;
	    
      public:
      	
        Liga(){
        	nombre="";
        	pais="";
		}//Fin del constructor de la red
			             
        Liga(string nombre,string pais){
			this->nombre.assign(nombre);	
			this->pais.assign(pais);            
        }//Fin del constructor sobrecargado
             
        void setNombre(string nombre){
            this->nombre.assign(nombre);
        }//Set del nombre de la liga
             
        string getNombre(){
            return this->nombre;
        }//Get del nombre de la liga
		
		void setPaes(string pais){
            this->pais.assign(pais);
        }//Set del pais donde se juega 
             
        string getPais(){
            return this->pais;
        }//Get del pais donde se juega
        
		void setEquipos(vector<Equipo*>equipos){
            this->equipos=equipos;
        }//Set del vetor de equipos
             
        void setEquipo(Equipo*clase){
            this->equipos.push_back(Equipo);
        }//Set de una solo equipo
             
        vector<Equipo*> getEquipos(){
            return this->equipos;
        }//Get del vector de los equipos
        
        void remEquipo(int p){
        	equipos.erase(equipos.begin()+p);
		}//Metodo que remueve un solo equipo		 
		              
        void print(){
        	cout<<"Nombre de la liga: "<<nombre<<
        	" Pais: "<<pais<<endl;
			cout<<"Equipos de la liga"<<endl;
			for(int i=0;i<equipos.size();i++){
        		equipos.at(i)->print();
			}//Fin del for de las computadoras
			cout<<"\n\n\n\n";
        }//Fin del metodo print 
        
        ~Liga(){
		}//Fin del destructor    
};
#endif
