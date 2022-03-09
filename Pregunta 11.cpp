#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class Estudiante{
	private: int codigo;
		public:
			Estudiante(int);
			void Notafinal();
};
Estudiante::Estudiante(int codigo1){
	codigo=codigo1;
}
void Estudiante::Notafinal(){
	int vuelta=0;
	int decision;
	cout<<"Parcial 1, espero sea de su agrado"<<endl;
	cout<<"Bienvenido de nuevo a la comprobacion de estudiantes"<<endl;
	cout<<"Cuantos estudiantes vas a ingresar: ";
	cin>>vuelta;
	for(int v=0; v<vuelta; v++){
		char nombre[41];
		char apellido[41];
		char curso[40];

		cout<<"Ingrese el codigo del estudiante:";
		cin>>codigo;
		cout<<"Verificando estudiante espere por favor"<<endl;
		Sleep(2500);
		cout<<"Estudiante comprobado"<<endl;
		cout<<"Quieres ver si aprobo"<<endl;
		cout<<"1: si"<<endl;
		cout<<"2: no"<<endl;
		cout<<"Respuesta:";
		cin>>decision;
		if(decision==1){
			int uno;
			int dos;
			int tres;
			int cuatro;
			int total;
			int promedio;

			cin.ignore();
			cout<<"Ingresa los nombres:";
			cin.getline(nombre,41,'\n');
			cout<<endl;
//			cin.ignore();
			cout<<"Ingresa los apellidos:";
			cin.getline(apellido,41,'\n');
			cout<<endl;
//			cin.ignore();
			cout<<"Ingresa el curso que quieres ver:";
			cin.getline(curso,40,'\n');
			cout<<"Ingresa la primera nota:";
			cin>>uno;
			cout<<"Ingresa la segunda nota:";
			cin>>dos;
			cout<<"Ingresa la tercera nota:";
			cin>>tres;
			cout<<"Ingresa la cuarta nota:";
			cin>>cuatro;
			cout<<"Tu promedio total:";
			total= uno+dos+tres+cuatro;
			promedio=total/4;
			cout<<promedio<<endl;
			if(promedio>60){
				cout<<"El alumno"<<endl;
				cout<<nombre;cout<<" ";cout<<apellido<<endl;
				cout<<"Aprobo satisfactoriamente la clase de ";
				cout<<curso<<endl;
			}
			else{
				if(promedio<60){
				cout<<"El alumno"<<endl;
				cout<<nombre;cout<<" ";cout<<apellido<<endl;
				cout<<"No aprobo satisfactoriamente la clase de ";
				cout<<curso;cout<<" Y tendra que ir a extraordinario o repetir anio"<<endl;
				}
			}
			
		}
		else{
			if(decision==2){
				break;
			}
		}
	}
}

int main(){
	int final;
	Estudiante comprobar(final);
	comprobar.Notafinal();
	
	return 0;
}
