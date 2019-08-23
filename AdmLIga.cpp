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
                Ligas.erase(ligas.begin()+p);
            }//Metodo que remueve una sola liga
			 
			int getN(){
               return ligas.size();
			}//Metodo para conseguir el size del vector de ligas             
            
            ~admLiga(){
			}//Destructor
            
            string token(string cadena, string divisor,int pos){
               if(cadena.size()>0){
                 char oracion[cadena.size()]; 
                 for (int i=0;i<=cadena.size();i++)
                 {oracion[i]=cadena[i];}                    
                 char *ptrtoken; 
                 int num=1;
                 const char* d=divisor.c_str();
                 ptrtoken = strtok(oracion , d);             
                 while(ptrtoken){
                     if(num==pos){ 
                        return ptrtoken;}                 
                     ptrtoken = strtok(NULL, d);
                     num++;}
                 return "";
               }else{return "";}
            }
            
        	void escribir(){
          		ofstream Escribir;
          		Escribir.open(ruta.c_str());  
          		for(int i=0; i<personas.size();i++){
                     Escribir<<personas.at(i)->getId()<<";"
                             <<personas.at(i)->getNombre()<<";"
                             <<personas.at(i)->getEdad()<<";"
                             <<personas.at(i)->getGenero()<<endl;
				}             
          		Escribir.close(); 
        	}
            
        	void leer(){
            	fstream Leer;
            	string linea;
            	personas.clear();                 
            	Leer.open(ruta.c_str()); 
           		if (Leer.is_open()){                 
                    while(! Leer.eof()){
                             getline(Leer,linea); 
                             if(linea.size()>0){//Atoi es de string a id o de cualquier otro numero  
                                addPersona(new Persona(atoi(token(linea,";", 1).c_str()),
                                                  token(linea,";", 2),
                                                  atoi(token(linea,";", 3).c_str()),
                                                  token(linea,";",4)
                                                  )//Fin del atoi
                            );                        
                        }
                    }
                }     
                Leer.close();
            }
                         
            void print(){
                  cout<<"Personas:"<<endl;
                
            for(int i=0; i<personas.size();i++){
				    cout<<"\t"<<"-";				    	
					personas.at(i)->print();				    
				}
            }             
};
#endif

