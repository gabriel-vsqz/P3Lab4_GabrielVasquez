#include "Libro.hpp"
#include <iostream>
#include <string>

using namespace std;

Libro :: Libro() {
}

Libro :: Libro(string t, string a, string s, int y, double p) {
	t = title;
	a = author;
	s = state;
	y = year;
	p = price;
}
