#include "Usuario.hpp"
#include <iostream>
#include <string>

using namespace std;

Usuario :: Usuario() {
}

Usuario :: Usuario(string u, string p, string n, int a, double m) {
	user = u;
	password = p;
	name = n;
	age = a;
	money = m;
}
