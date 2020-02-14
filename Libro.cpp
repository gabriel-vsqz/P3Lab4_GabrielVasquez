#include "Libro.hpp"
#include <iostream>
#include <string>

using namespace std;

Libro :: Libro() {
}

Libro :: Libro(string t, string a, int y, double p, string s) {
	title = t;
	author = a;
	year = y;
	price = p;
	state = s;
}
