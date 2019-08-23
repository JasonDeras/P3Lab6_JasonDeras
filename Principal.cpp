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
		
		int r=1;
		int op;
		vector<Liga*>ligas;
		vector<Equipo*>equipos;
		vector<Jugador*>jugadores;
		
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
							
						break;
						
						case 2:
							
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
		cout<<"3. Agregar un jugador\n\n";
		cout<<"Ingrese una opcion: ";
		cin>>op;
		return op;
	}//Fin del sub menu de los quipos
	
	int menujugadores(){
		int op;
		cout<<"1. Agregar jugador\n\n";
		cout<<"2. Eliminar jugador\n\n";
		cout<<"Ingrese una opcion\n\n";
		cin>>op;
		return op;
	}//Fin del sub menu de los jugadores
