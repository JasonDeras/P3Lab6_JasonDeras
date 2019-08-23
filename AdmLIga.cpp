#include<iostream> 
#include<string> 
#include <fstream>
#include <stdlib.h>
#include "Liga.cpp"
#include <vector>
#include <bits/stdc++.h>
#ifndef ADMLIGAS_CPP
#define ADMLIGAS_CPP

using namespace std;

class admLiga{
	
      private:
      	
    	string ruta;//Memoria rom
        vector<Liga*> ligas;//Memoria ram 
		                          
      public:
             
            admLiga(string ruta){
               this->ruta=ruta;
			}//Constructor de la ruta 
			           
            string getRuta(){
                 return ruta;
			}//Get de la ruta del archivo 
            
            void addLiga(Liga* p){
                 ligas.push_back(p);
		    }//Metodo para agregar una sola liga
            
            vector<Liga*> getLigas(){
                  return this->ligas;
            }//Get del vector de las ligas 

			void remLiga(int p){
                ligas.erase(ligas.begin()+p);
            }//Metodo que remueve una sola liga
			 
			int getN(){
               return ligas.size();
			}//Metodo para conseguir el size del vector de ligas             
            
            ~admLiga(){
			}//Destructor
            
            string token(string cadena, string divisor,int pos){
            	
               if(cadena.size()>0){
               	
                 	char oracion[cadena.size()];
					  
                 	for (int i=0;i<=cadena.size();i++){
					 	oracion[i]=cadena[i];
					}//Fin del for
					                    
                 	char *ptrtoken; 
                 	int num=1;
                 	const char* d=divisor.c_str();
                 	ptrtoken = strtok(oracion , d);
					              
                 	while(ptrtoken){
                     	if(num==pos){ 
                        	return ptrtoken;
						}//Fin del if                 
                     	ptrtoken = strtok(NULL, d);
                     	num++;
					}//Fin del while
                 return "";
               }else{return "";}
            }//Fin del metodo token
            
        	void escribir(){
				ofstream escri;
				escri.open(ruta.c_str());
				for(int i=0; i<ligas.size(); i++){//inicio for ligas
					escri<<"$"<<ligas.at(i)->getNombre()<<":"<<ligas.at(i)->getPais()<<endl;
					for(int j=0; j<ligas.at(i)->getEquipos().size(); j++){//inicio for de equipos de liga
						escri<<ligas.at(i)->getEquipos()[j]->getNombre()<<":"
						<<ligas.at(i)->getEquipos()[j]->getFundacion()<<"{";
						for(int k=0; k<ligas.at(i)->getEquipos()[j]->getJugadores().size(); k++){//inicio for de jugadores de equipo
							escri<<ligas.at(i)->getEquipos()[j]->getJugadores()[k]->getNombre()<<"|"
							<<ligas.at(i)->getEquipos()[j]->getJugadores()[k]->getDorsal()<<"|"
							<<ligas.at(i)->getEquipos()[j]->getJugadores()[k]->getPais()<<";";
							}//fin for de jugadores de equipo
							escri<<"}"<<endl;
					}//fin for de equipos de liga
				}//Fin del for que recorre las ligas
				escri.close();
        	}//Fin del metodo para escribir
            
        	void leer(){
            	fstream leer;
            	string linea;
            	ligas.clear();                 
            	Leer.open(ruta.c_str()); 
           		if (Leer.is_open()){                 
                    while(! Leer.eof()){
                            
                            );                        
                        }
                    }
                }     
                leer.close();
            }//Fin del metodo para leer el archivo
                         
            void print(){
                  cout<<"Ligas"<<endl;
                  for(int i=0;i<ligas.size();i++){
				  }//Fin del for de impresion de las ligas
				  cout<<"\n\n\n\n";
            }//Fin del metodo print        
};
#endif

