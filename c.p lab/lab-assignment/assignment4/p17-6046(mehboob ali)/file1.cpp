#include <iostream>
using namespace std;

class list {

private:
	int arr[5];
public:

	list() {

		for (int i = 0; i < 5; i++)
			arr[i] = 0;
	}

	~ list() {
		 //empty body
	}

	void initailze() {
		cout << "enter the numbers " << endl;
		for(int i = 0; i < 5; i++) {
			cin >> arr[i];
		}
	}

	list operator +(list d) {

		list temp;
		for (int i = 0; i < 5; i++) {
			temp.arr[i] = arr[i] + d.arr[i];
		}
		return temp;

	}

	list operator *(list d) {
		list temp;
		for(int i = 0 ; i < 5; i++) 
			temp.arr[i] = arr[i] * d.arr[i];
		return temp;
	}

	bool operator ==(list d) {

		bool flag = true;
		for (int i = 0; i < 5; i++) {
			if (arr[i] == d.arr[i])
				flag = true;
			else 
				flag = false;
		}
		return flag;
	}

	void operator ++() {
		for (int i = 0; i < 5; i++) {
			++arr[i];
		}
	}

	void print() {

		for (int i = 0; i < 5; i++)
			cout << arr[i] << "  ";
		cout << endl;

	}



};






int main() {

	list d1,d2, d3;
	d1.initailze();
	d2.initailze();
	d3 = d1 + d2;
	d3.print();
	d3 = d1 * d2;
	d3.print();
	if(d2 == d1) 
		cout << "d2 and d1 are equal ";
	++d3;
	d3.print();

}