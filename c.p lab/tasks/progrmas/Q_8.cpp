#include <iostream>
using namespace std;


int max(int aray[], int size, int m) {

	if (size == 0)
		return m;

	if (aray[size] > m)
		m = aray[size];

	return max(aray, size - 1, m);
}

int main() {

	int aray[] = {1,2,3,4};
	int m = aray[0];
	cout << max(aray, 3, m);


return 0;
}