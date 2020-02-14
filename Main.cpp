#include "Usuario.hpp"
#include "Libro.hpp"
#include <iostream>
#include <string>
#include <array>

using namespace std;

array<Usuario, 10> usuarios;
array<Libro, 10> libros;

//Usuario usuarios[10];

Usuario admin("n.duron", "sybase", "Nicolle Duron", 20, 1000);
//usuarios[0] = admin;

int main(){
	usuarios[0] = admin;
	cout << "Sistema de Compra de Libros\n\n";
	int opcion;
	cout << "\n0. Salir\n1. Registrarse\n2. Ingresar al Sistema\nSu elección: ";
	cin >> opcion;
	do {
		switch (opcion) {
			case 0: {
				cout << "Ha salido del sistema" << endl;
				} break;
			case 1: {
					//cout <<
				} break;
			case 2: {
			        } break;
			default:
				cout << "Debe Registrarse o Ingresar al Sistema" << endl;
		}
	} while(opcion != 0);
}
