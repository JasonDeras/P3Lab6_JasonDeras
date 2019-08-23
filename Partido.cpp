#include<iostream>
#include<string.h>
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
		              
        void print(){
        	cout<<"Pimer equipo"<<endl;
        	red->print();
			cout<<"\n\n\n\n";
			cout<<"Segundo equipo"<<endl;
			blue->print();
        }//Fin del metodo print 
        
        ~Partido(){
		}//Fin del destructor    
};
#endif
