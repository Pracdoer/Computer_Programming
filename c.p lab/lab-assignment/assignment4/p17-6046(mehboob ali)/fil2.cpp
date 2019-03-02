#include <iostream>
using namespace std;


class matrix {

private:
	int arr[4][4];
public:
	matrix() {

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) 
				arr[i][j] = 0;
		}
	}

	void initailze() {

		cout << "enter the numbers " << endl;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) 
				cin >> arr[i][j];
		}
	}
	~matrix() {

		//empty body
	}

	matrix operator +(matrix d) {

		matrix temp;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++)
				temp.arr[i][j]  =  arr[i][j] + d.arr[i][j]; 
		}
		return temp;
	}

	matrix operator %(matrix d) {

		matrix temp;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++)
				temp.arr[i][j] = arr[i][j] %  d.arr[i][j]; 
		}
		return temp;
	}

	bool operator >=(matrix d) {
		bool flag = true;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (arr[i][j] >= d.arr[i][j])
					flag = true;
				else 
					flag = false;
			}
		}
		return flag;
	}

	bool operator <=(matrix d) {
		bool flag = true;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (arr[i][j] <= d.arr[i][j])
					flag =  true;
				else 
					flag = false;
			}
		}
		return flag;
	}
	void print() {

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++)
				cout << arr[i][j] << "  " ;
		}
		cout << endl;
	}
};


int main() {

	matrix s1, s2, s3;
	s1.initailze();
	s2.initailze();
	s3 = s1 + s2;
	s3.print();
	s3 = s1 % s2;
	s3.print();
	if (s1 >= s2) 
		cout << "s1  >= s2" << endl;
	if (s1 <= s2) 
		cout << "s1 <= s2" << endl;	

}