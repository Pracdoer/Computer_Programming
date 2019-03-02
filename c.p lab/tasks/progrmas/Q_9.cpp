#include <iostream>
using namespace std;

int word_sen(string sen, int size, int word) {

	int length = sen.length(); 

	if (size == length)
		return word;

	if (sen[size] == ' ')
		word++;
	return word_sen(sen, size + 1, word);
}

int main() {

	string sent = "h wd";
	int size  = 0;
	int word = 1;
	cout << word_sen(sent, size, word);












return 0;
}
