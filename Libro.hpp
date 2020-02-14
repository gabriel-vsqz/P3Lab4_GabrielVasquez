#ifndef LIBRO_HPP
#define LIBRO_HPP
#include <string>

using namespace std;

class Libro {
        private:
 		string title, author, state;
                int year;
                double price;
        public:
                Libro();
                Libro(string t, string a, int y, double p, string state);
                void setTitle (string t) {
   			title = t;
                };
                string getTitle() {
                        return title;
                };
                void setAuthor (string a) {
                        author = a;
                };
                string getAuthor() {
                        return author;
                };
                void setState (string s) {
                        state = s;
                };
                string getState() {
                        return state;
                };
                void setYear (int y) {
                        year = y;
                };
                int getYear() {
                        return year;
                };
                void setPrice (double p) {
                        price = p;
                };
                double getPrice() {
                        return price;
                };
};

#endif
