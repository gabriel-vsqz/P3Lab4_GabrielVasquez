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
			u = user;
		};
                string getUser() {
                        return user;
                };
		void setPassword (string p) {
			p = password;
		};
                string getPassword() {
                        return password;
                };
		void setName (string n) {
			n = name;
		};
 		string getName() {
                        return name;
                };
		void setAge (int a) {
			a = age;
		};
                int getAge() {
                        return age;
                };
		void setMoney (double m) {
			m = money;
		};
                double getMoney() {
                        return money;
                };
};

#endif
