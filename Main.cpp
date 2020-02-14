#include "Usuario.hpp"
#include "Libro.hpp"
#include <iostream>
#include <string>
#include <array>

using namespace std;

array<Usuario, 10> usuarios;
array<Libro, 10> libros;

int cont_u = 1;
int cont_l = 1;
bool valid = false;

Usuario actual;
Libro este;

void Registro() {
	string user, password, name;
	int age;
	double money;
		
	cout << "Nombre de Usuario: ";
	cin >> user;
	cout << "Contraseña: ";
	cin >> password;
	cout << "Nombre: ";
	cin >> name;
	cin;
	while (age <= 0) {
		cout << "Edad: ";
		cin >> age;
	}
	cout << "Dinero Disponible: ";
	cin >> money;

	Usuario nuevo(user, password, name, age, money);
	usuarios[cont_u] = nuevo;	
}

void crearLibro() {
	string title, author, state;
	int year;
	double price;

	cout << "Título del libro: ";
	cin >> title;
	cout << "Autor: ";
	cin >> author;
	cout << "Año de Publicación: ";
	cin >> year;
	cout << "Precio: ";
	cin >> price;
	cout << "Estado (Vendido/Disponible): ";
        cin >> state;
	Libro nuevol(title, author, year, price, state);
	libros[cont_l] = nuevol;
}

void Ingresar(string u, string c) {
	for (Usuario usuario : usuarios) {
		if (u == usuario.getUser() && c == usuario.getPassword()) {
			cout << "Bienvenido " << usuario.getName();
			actual = usuario;
			valid = true;
			cout << "\n";
		}
	}
			
}

void listarLibros() {
	int counter = 1;
	for (Libro libro : libros) {
		cout << "Libro " << counter << "\nTítulo: " << libro.getTitle();
		cout << "\nAño de Publicación: " << libro.getYear() << "\nAño de Publicación: " << libro.getYear();
		cout << "\nPrecio: " << libro.getPrice() << "\nEstado: " << libro.getState();
		counter++;
	}
}

void modLibro() {
	string t, a, s;
	int y;
	double p;

	cout << "Nuevo Título: ";
	cin >> t;
	este.setTitle(t);
	
	cout << "Nuevo Autor: ";
	cin >> a;
	este.setAuthor(a);
	
	cout << "Nuevo Año de Publicación: ";
	cin >> y;
	este.setYear(y);

	cout << "Nuevo Precio: ";
	cin >> p;
	este.setPrice(p);

	cout << "Estado (Disponible/Vendido): ";
	cin >> s;
	este.setState(s);
}

void MenuAdmin() {
	int opcion2;
	do {
		cout << "0. Salir\n1. Agregar Libro\n2. Modificar Libro\n3. Eliminar Libro\n4. Borrar Registro de Libros\nSu opción: ";
		cin >> opcion2;
		switch (opcion2) {
			case 1: {
					if (cont_l < 10) {
						crearLibro();
						cont_l++;
						cout << "Nuevo Libro Registrado";
					} else {
						cout << "Se ha alcanzado la cantidad máxima de libros registrados";
					}
				} break;
			case 2: {
					listarLibros();
					int pos;
					cout << "\n¿En que posición está el libro que desea modificar? ";
					cin >> pos;

					if (pos > 0 && pos <= cont_l) {
						este = libros.at(pos-1);
						modLibro();
						cout << "Modificado exitosamente" << endl;
					}
				} break;
			case 3: {
					listarLibros();
					int pos2;
					cout << "\n¿En que posición está el libro que desea eliminar? ";
                                        cin >> pos2;

					if (pos2 > 0 && pos2 <= cont_l) {
						for (int i = 0; i <= cont_l; i++) {
							if ( i + 1 <= cont_l) {
								libros[i] = libros[i + 1];
							}
						}
						cont_l--;
					}
					cout << "Eliminado Exitosamente" << endl;
				} break;
			case 4: {
					array<Libro, 10> nuevosL;
					libros = nuevosL;
					cout << "Se han borrado los libros" << endl;
				} break;
			default:
				cout << "Debe ingresar una opción presentada" << endl;
		}
	} while (opcion2 != 0);
}

void MenuOtro() {
	int opcion3;
	do {
		cout << "\n0. Salir\n1. Comprar Libro\n2. Buscar por Autor\n3. Buscar por Título\n4. Agregar Dinero a mi Cuenta\n5. Restablecer Contraseña\n6. Borrar Cuenta\nSu Opción: ";
		cin >> opcion3;
		switch (opcion3) {
			case 1: {
					listarLibros();
					int pos4;
					cout << "¿Qué libro desea comprar? ";
					if (actual.getMoney() > libros[pos4-1].getPrice()) {
						libros[pos4-1].setState("Vendido");
						actual.setMoney(actual.getMoney() - libros[pos4-1].getPrice());
					}
				} break;
			case 2: {
					string search;
					cout << "Búsqueda por Autor" << endl;
					cout << "¿Qué autor busca? ";
					cin >> search;
					int cont = 1;
					for (Libro libro : libros) {
						if (search == libro.getAuthor()) {
							cout << cont << libro.getTitle() << endl;
							cont++;
						}
					}
				} break;
			case 3: {
					string search;
                                        cout << "Búsqueda por Título" << endl;
                                        cout << "¿Qué título busca? ";
                                        cin >> search;
                                        int cont = 1;
                                        for (Libro libro : libros) {
                                                if (search == libro.getTitle()) {
                                                        cout << cont << libro.getTitle() << endl;
                                                        cont++;
                                                }
                                        }
				} break;
			case 4: {
					int deposit;
					cout << "¿Cuánto dinero desea agregar? ";
					cin >> deposit;
					actual.setMoney(deposit + actual.getMoney());
					cout << "Depósito Exitoso" << endl;
				} break;
			case 5: {
					string lastp, npass;
					cout << "Ingrese su contraseña actual: ";
					cin >> lastp;
					if (actual.getPassword() == lastp) {
						cout << "Nueva contraseña: ";
						cin >> npass;
						actual.setPassword(npass);
					}
					cout << "Contraseña Reestablecida" << endl;
				} break;
			case 6: {
					
				} break;
			default:
				cout << "Debe ingresar una opción presentada" << endl;
		}
	} while (opcion3 != 0);
}

int main(){
	Usuario admin("n.duron", "sybase", "Nicolle Duron", 20, 1000);
	usuarios[0] = admin;
	cout << "Sistema de Compra de Libros\n------------------------------" << endl;
	int opcion;
	do {
		cout << "\n0. Salir\n1. Registrarse\n2. Ingresar al Sistema\nSu elección: ";
		cin >> opcion;
		switch (opcion) {
			case 0: {
				cout << "Ha salido del sistema" << endl;
				} break;
			case 1: {
					if (cont_u < 10) {
						Registro();
						cont_u++;
						cout << "Se ha registrado exitosamente" << endl;
					} else {
						cout << "Se ha alcanzado la máxima cantidad de usuarios que se pueden registrar" << endl;
					}
				} break;
			case 2: {
					string u, c;
					cout << "Usuario: ";
					cin >> u;
					cout << "Contraseña: ";
					cin >> c;
					Ingresar(u, c);
					cout << "\n";
					if (valid == true && actual.getUser() == "n.duron") {
						MenuAdmin();
					} else if (valid == true) {
						MenuOtro();
					} else {
						cout << "No hay ningún usuario con esos datos" << endl;
					}
			        } break;
			default:
				cout << "Debe Registrarse o Ingresar al Sistema" << endl;
		}
	} while(opcion != 0);
}
