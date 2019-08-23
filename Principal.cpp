#include <iostream>
#include<string.h>
#include<vector>
#include<bits/stdc++.h>
#include "Liga.cpp"
#include "Equipo.cpp"
#include "Jugador.cpp"
#include "Partido.cpp"

using namespace std;

int menuligas();
int menuequipos();
int menujugadores();

	int main(){
		
		//Variables para el manejo de los menus
		int r=1;
		int op;
		int pos;
		int pos1;
		
		//Vectores para controlar las ligas
		vector<Liga*>ligas;
		vector<Equipo*>equipos;
		vector<Jugador*>jugadores;
		
		//Variables de control de ligas
		string nombre_l;//Nombre de la liga
	   	string pais_l;//Pais donde se juega la linea
	   
	   	//Variables de control de equipos
	   	string nombre_e;//Nombre del equipo
	   	string fundacion;//Año de la fundacion del equipo
	   	int p_j;//Partidos jugados
	   	int p_g;//Partidos ganados
	   	int p_e;//Partidos empatados
	   	int p_p;//Partidos perdidos
	   	int g_f;//Goles a favor
	   	int g_c;//Goles encontra
	   	int d_g;//Diferencia de goles
	   	int puntos;//Puntos de los quipos
	   	
	   	//Variables de control de jugadores
	   	string nombre_j;//Nombre del jugador
	   	string dorsal;//Numero del jugador
	   	string pais_j;//Pais de origen del jugador
	   
		while(r==1){
			
			cout<<"Menu\n\n\n\n";
			cout<<"1. Administrar ligas\n\n";
			cout<<"2. Administrar equipos\n\n";
			cout<<"3. Administrar jugadores\n\n";
			cout<<"4. Jugar partido\n\n";
			cout<<"5. Cargar archivo\n\n";
			cout<<"6. Guardar Archivo\n\n";
			cout<<"7. Ver tablas\n\n";
			cout<<"8. Salir\n\n";
			cout<<"Ingrese una opcion: ";
			cin>>op;
			
			switch(op){
				
				case 1:
					
					system("cls");
					switch(menuligas()){
						
						case 1:
							
							system("cls");
							cout<<"Ingrese nombre de la liga: ";
							cin>>nombre_l;
							cout<<"Ingrese pais donde se juega la liga: ";
							cin>>pais_l;
							ligas.push_back(new Liga(nombre_l,pais_l));
							
						break;
						
						case 2:
							
							cout<<"Ingrese la posicion que desea eliminar: ";
							cin>>pos;
							if(pos>=0&&pos<ligas.size()){
								ligas.erase(ligas.begin()+pos);
								((Liga*)ligas.at(pos))->~Liga();
								cout<<"Eliminado exitosamente\n\n\n\n";
							}else {
								cout<<"Posicion no valida\n\n\n\n";
							}//If que valida si la posicion es valida

						break;
						
						default:
							cout<<"Opcion no valida\n\n\n\n";
						break;	
					}//Fin del menu de la liga
						
				break;
				
				case 2:
					
					system("cls");
					if(ligas.empty()){
						cout<<"Debe de crear una liga por lo menos\n\n\n\n";
					}else{
						
						switch(menuequipos()){
							
							case 1:
								
								cout<<"Ingrese nombre del equipo: ";
								cin>>nombre_e;
								cout<<"Ingrese anio de fundacion: ";
								cin>>fundacion;
								equipos.push_back(new Equipo(nombre_e,fundacion));
								
							break;
								
							case 2:
								cout<<"Ingrese la posicion a eliminar: ";
								cin>>pos;
								if(pos>=0&&pos<equipos.size()){
									equipos.erase(equipos.begin()+pos);
									((Equipo*)equipos.at(pos))->~Equipo();
									cout<<"Eliminado correctamente\n\n\n\n";
								}else{
									cout<<"Posicion no valida\n\n\n\n";
								}//Fin del if que valida si la posicion es valida
								
							break;
									
							default:
								cout<<"Opcion no valida\n\n\n\n";
							break;
						}//Fin del swtich del sub menu de los equipos
						
					}//Fin del if que valida si la 
					
				break;
				
				case 3:
					
					system("cls");
					if(equipos.empty()){
						cout<<"Debe de crear un equipo antes\n\n\n\n";
					}else {
						switch(menujugadores()){
							
							case 1:
								
								cout<<"Ingrese nombre del jugador: ";
								cin>>nombre_j;
								cout<<"Ingrese dorsal del jugador: ";
								cin>>dorsal;
								cout<<"Ingrese el pais de origen del jugador: ";
								cin>>pais_j;
								jugadores.push_back(new Jugador(nombre_j,dorsal,pais_j));
								
							break;
								
							case 2:
								cout<<"Ingrese la posicion del jugador a eliminar: ";
								cin>>pos;
								if(pos>=0&&pos<jugadores.size()){
									jugadores.erase(jugadores.begin()+pos);
									((Jugador*)jugadores.at(pos))->~Jugador();
									cout<<"Eliminado exitosamente\n\n\n\n";
								}else {
									cout<<"Posicion no valida\n\n\n\n";
								}//Fin del if que valida si la posicion es valida
								
							break;
							
							default:
								cout<<"Opcion no valida\n\n\n\n";
							break;
						}//Fin del switch del sub menu de jugadores
						
					}//Fin del if que valida si hay un equipo agregado	
					
				break;
				
				case 8:
					
					system("cls");
					exit(0);
					
				break;
					
				default: 
					cout<<"Opcion no valida\n\n\n\n";
				break;	
			}//Fin de las opciones del menu
			
			cout<<"Volver al menu?1.-Si,2.-No: ";
			cin>>r;
			cout<<"\n\n\n\n";
			system("cls");
		}//Fin del while del menu principal
		
		system("pause");
		return 0;
		
	}//Fin del main
	
	int menuligas(){
		int op;
		cout<<"1. Agregar una nueva liga\n\n";
		cout<<"2. Eliminar una liga\n\n";
		cout<<"3. Agregar un equipo\n\n";
		cout<<"Ingrese una opcion: ";
		cin>>op;
		return op;
	}//Fin del sub menu de las ligas
	
	int menuequipos(){
		int op;
		cout<<"1. Agregar un equipo\n\n";
		cout<<"2. Eliminar un equipo\n\n";
		cout<<"Ingrese una opcion: ";
		cin>>op;
		return op;
	}//Fin del sub menu de los quipos
	
	int menujugadores(){
		int op;
		cout<<"1. Agregar jugador\n\n";
		cout<<"2. Eliminar jugador\n\n";
		cout<<"3. Agregarlo a un equipo\n\n";
		cout<<"Ingrese una opcion\n\n";
		cin>>op;
		return op;
	}//Fin del sub menu de los jugadores
