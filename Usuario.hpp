#ifndef USUARIO_HPP
#define USUARIO_HPP
#include <string>
using namespace std;

class Usuario {
	private:
		string user, password, name;
		int age;
		double money;
	public:
		Usuario();
		Usuario(string u, string p, string n, int a, double m);
		void setUser (string u) {
			user = u;
		};
                string getUser() {
                        return user;
                };
		void setPassword (string p) {
			password = p;
		};
                string getPassword() {
                        return password;
                };
		void setName (string n) {
			name = n;
		};
 		string getName() {
                        return name;
                };
		void setAge (int a) {
			age = a;
		};
                int getAge() {
                        return age;
                };
		void setMoney (double m) {
			money = m;
		};
                double getMoney() {
                        return money;
                };
};

#endif
