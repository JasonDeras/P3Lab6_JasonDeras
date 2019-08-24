#include <iostream>
#include<string.h>
#include<vector>
#include<bits/stdc++.h>
#include "Liga.cpp"
#include "Equipo.cpp"
#include "Jugador.cpp"
#include "Partido.cpp"
#include "AdmLIga.cpp"

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
		int pos2;
		
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
							
							case 3:
								
								cout<<"Ingrese la posicion de la liga de donde desa eliminar el equipo: ";
								cin>>pos;
								if(pos>=0&&pos<ligas.size()){
									
									cout<<"Ingrese la posicion del equipo que desea eliminar: ";
									cin>>pos1;
									
									if(pos1>=0&&pos<ligas.at(pos)->getEquipos().size()){
										ligas.at(pos)->remEquipo(pos1);
										cout<<"Eliminado correctamente\n\n\n\n";
									}else{
										cout<<"Posicion del equipo no valida\n\n\n\n";
									}//Fin del if que valida si la posicion de ese equipo existe
								}else{
									cout<<"Posicion de la liga no valida\n\n\n\n";
								}//Fin del if del equipo 
								
							break;
								
							case 4:
								
								cout<<"Ligas activas"<<endl;
								for(int i=0;i<ligas.size();i++){
									ligas.at(i)->print();
								}//Fin del for de impresion de las ligas
								cout<<"\n\n\n\n";
								cout<<"Ingrese la posicion de la liga: ";
								cin>>pos;
								if(pos>=0&&pos<ligas.size()){
									
									ligas.at(pos)->setEquipo(equipos.at(pos));
									cout<<"Equipo agregado exitosamente\n\n\n\n";
								}else{
									cout<<"Posicion de liga no valida\n\n\n\n";
								}//Fin del if que valida que la posicion de la liga que ingreso es valida
								
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
							
							case 3:
								
								cout<<"Ingrese la posicion de la para ver los equipos: ";
								cin>>pos;
								if(pos>=0&&pos<ligas.size()){
									cout<<"Equipos en esta liga"<<endl;
									for(int i=0;i<ligas.at(pos)->getEquipos().size();i++){
										ligas.at(pos)->getEquipos().at(i)->print();
									}//Fin del for de impresion de los equipos
									cout<<"\n\n\n\n";
									cout<<"Ingrese la posicion del equipo al que se va a agregar el jugador: ";
									cin>>pos1;
									if(pos1>=0&&ligas.at(pos)->getEquipos().size()){
										((Equipo*)ligas.at(pos)->getEquipos().at(pos1))->setJugador(jugadores.at(pos1));
									}else {
										cout<<"La posicion del equipo no es valida\n\n\n\n";
									}//Fin del if que valida si la posicion del equipo es valida	
								}else{
									cout<<"Posicion de loga no valida\n\n\n\n";
								}//Fin del if que valida que ingreso un liag correcto
								
							break;
							
							default:
								cout<<"Opcion no valida\n\n\n\n";
							break;
						}//Fin del switch del sub menu de jugadores
						
					}//Fin del if que valida si hay un equipo agregado	
					
				break;
				
				case 4:
					
					cout<<"Ligas creadas"<<endl;
					for(int i=0;i<ligas.size();i++){
						ligas.at(i)->print();
					}//Fin del for de impresion de las ligas
					cout<<"\n\n\n\n";
					cout<<"Ingrese la posicion de la liga: ";
					cin>>pos;
					if(pos>=0&&pos<ligas.size()){
						cout<<"Equipos en esa liga"<<endl;
						for(int i=0;i<ligas.at(pos)->getEquipos().size();i++){
							ligas.at(pos)->getEquipos().at(i);
						}//Fin del for que imprime los equipos de esa liga
					}else{
						cout<<"Posicion no valida\n\n\n\n";
					}//Fin del if qur valida si la posicion de la liga es valida
				break;
				
				case 8:
					
					system("cls");
					
					//Limpiando el vector de equipos
					equipos.clear();
					if(!equipos.empty()){
						equipos.clear();
					}
					//Limpiando el vector de jugadores
					jugadores.clear();
					if(!jugadores.empty()){
						jugadores.clear();
					}
					//Limpiando el vector de las ligas
					ligas.clear();
					if(!ligas.empty()){
						ligas.clear();
					}
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
		cout<<"3. Eliminar un equipo\n\n";
		cout<<"Ingrese una opcion: ";
		cin>>op;
		return op;
	}//Fin del sub menu de las ligas
	
	int menuequipos(){
		int op;
		cout<<"1. Agregar un equipo\n\n";
		cout<<"2. Eliminar un equipo\n\n";
		cout<<"3. Agregar equipo a la liga\n\n";
		cout<<"4. Eliminar un jugador del equipo\n\n";
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
