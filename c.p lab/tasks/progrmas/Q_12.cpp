#include <iostream>
using namespace std;

int vowel(string s, int size, int c) {

	if(size == s.length())
		return c;

	if (s[size] == 'e' or s[size] == 'a' or s[size] == 'i' or s[size] == 'o' or s[size] == 'u')
		c++; 
	return vowel(s , size + 1, c);
}

int main() {

	int size = 0;
	int c = 0;
	string s = "heloo wordl";
	cout << vowel(s,size, c);
}