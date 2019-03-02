#include <iostream>
using namespace std;

struct Employee_Struct {

	string firstName, lastName, fatherName, factoryName, department, email, address;
	int emp_number, emp_age, pho_number;
	double salaries[4];

};

int main() {

	Employee_Struct p[12];
	cout << "enter your name " << endl;

	for (int i = 0; i < 12; i++) {

		for (int j =0; j < 10; j++) {

			p[i] = p[j].firstName;
			break;

		}
		break;
	}

	cout << p[0].firstName;



return 0;

}