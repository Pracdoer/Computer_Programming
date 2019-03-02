#include <iostream>
using namespace std;


int search(int array[],int size,int n,int m) {

	if (size == 0)
		return n; 

	if (array[size] == m)
		n = array[size];
	return search(array, size - 1, n, m);
}


int main() {

	int m = 1;
	int array[] = {1,24,5,3};
	int n;
	cout << "enter element to search " << endl;
	cin >> n;
	cout << search(array, 3, n, m);






return 0;
}