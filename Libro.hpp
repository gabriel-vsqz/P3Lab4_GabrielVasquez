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
                Libro(string t, string a, string s, int y, double p);
                void setTitle (string t) {
                        t = title;
                };
                string getTitle() {
                        return title;
                };
                void setAuthor (string a) {
                        a = author;
                };
                string getAuthor() {
                        return author;
                };
                void setState (string s) {
                        s = state;
                };
                string getState() {
                        return state;
                };
                void setYear (int y) {
                        y = year;
                };
                int getYear() {
                        return year;
                };
                void setPrice (double p) {
                        p = price;
                };
                double getPrice() {
                        return price;
                };
};

#endif
