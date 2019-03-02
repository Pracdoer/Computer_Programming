#include <iostream>
using namespace std;

struct nameType {

	string firstName;
	string middleName;
	string lastName;

	void Initialize() {

		string firstName, middleName, lastName;
	}

	void setValues(string f, string m, string l) {
		cout << "enter your firstname: " << endl;
		cin >> firstName;
		cout << "enter your middleName :" << endl;
		cin >> middleName;
		cout << "enter your last name :" << endl;
		cin >> lastName;
	}

	void printNames() {

		cout << "your First name is " << firstName << endl;
		cout << "your middle name is " << middleName << endl;
		cout << "your last name is " << lastName << endl;
	}


};

struct addressType {

	string address1, address2, city, state , zipcode;

	void Initialize() {

		string address1, address2, city, state , zipcode;
	}
	void setAddress(string add1, string add2) {

		cout << "enter your address1 " << endl;
		cin >> address1;
		cout << "enter your address2 " << endl;
		cin >> address2; 
	}
	void setCity(string c) {
	
		cout << "enter your city name " << endl;
		cin >> city; 
	}
	void setState(string s) {

		cout << "enter your state name " << endl;
		cin >> state;
	}
	void setZipcode(string z) {

		cout << "enter your zipcode of your city " <<endl;
		cin >> zipcode;
	}
	void printAddress() {

		cout << address1 << endl;
		cout << address2  << endl; 
	}

};

struct student {

	int id;
	nameType name;
	addressType address;
};


int main() {

	nameType p;
	addressType q;
	student s[10];


	p.Initialize();
	p.setValues(p.firstName , p.middleName, p.lastName);
	p.printNames();
	q.Initialize();
	q.setAddress(q.address1, q.address2);
	q.setCity(q.city);
	q.setState(q.state);
	q.setZipcode(q.zipcode);
	q.printAddress();
	for (int i = 0; i < 10; i++) {
		s[i].id;
		s[i].name.setValues(p.firstName , p.middleName, p.lastName);
		s[i].name.printNames(p.firstName , p.middleName, p.lastName);
		s[i].address.setAddress(q.address1, q.address2);
		s[i].setCity(q.city);
		s[i].address.setState(q.state);
		s[i].address.setZipcode(q.zipcode);
		s[i].address.printAddress();
	}

return 0;

}
