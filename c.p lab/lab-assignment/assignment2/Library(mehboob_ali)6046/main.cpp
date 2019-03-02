#include <iostream>
#include "IntType.h"
using namespace std;


//// to run this just type on your terminal >> ./hello.out 
int main() {

	IntType s1(5);
	IntType t1(5);
	IntType t2(3);
	s1.setNum(3);
	s1.printNum();
	s1.numLength(2324);
	s1.reverseNum(342);
	s1.sum_all_digits(234);
	s1.avg_of_digits(234);
	cout << s1.pallindrom(234) << endl;
    s1.remainder(234);
    s1.count_evens(234);
    s1.count_odds(234);
    s1.max_digit(234);
    s1.min_digit(234);
    s1.sum_even_digits(234);
    s1.sum_odd_digits(234);
    s1.append_digit(234, 5);
    s1.toBinary(234);
    s1.toHexadecimal(234);
    s1.toAscii(65);
    s1.int_to_string(234);
    s1.mid_digit(324216);
    s1.delete_digit(32453, 5);
    cout << s1.add(t1, t2) << endl;
    cout << s1.sub(t1, t2) << endl;
    cout << s1.multiply(t1, t2) << endl;
    cout << s1.divide(t1, t2) << endl;

return 0;
}
