// полиморфизм сотрудник.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Employee {
public:
	string name;
	int hour;
	int rate;
public:
	void salary() {
		cout << "Employee's salary:  " << hour * rate << endl;
	}
};

class Manager : public Employee {
public:
	double bonus;
public:
	void salary() {
		cout << "Manager's salary:  " << hour * rate + bonus << endl;
	}
};
int main() {
	Employee amp;
	amp.name = "Misha Smirnov";
	amp.hour = 8;
	amp.rate = 50;
	amp.salary();

	Manager emp;
	emp.name = "Sasha Nikolaev";
	emp.hour = 12;
	emp.rate = 50;
	emp.bonus = 100;
	emp.salary();

	return 0;
}