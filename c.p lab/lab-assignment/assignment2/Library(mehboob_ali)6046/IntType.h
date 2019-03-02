#include <iostream>
#include <sstream>
using namespace std;

class IntType {
private:
    int n;
public:
    IntType() {
        n = 0;
    }
    IntType(int num1) {
        n = num1;
    }
    ~IntType() {
    	//empty body
    }
    void setNum(int num);
    void printNum();
    int get();
    int numLength(int num);
    int reverseNum(int num);
    int sum_all_digits(int num);
    int avg_of_digits(int n);
    bool pallindrom(int num);
    int remainder(int num);
    int count_evens(int num);
    int count_odds(int num);
    int max_digit(int num);
    int min_digit(int num);
    int sum_even_digits(int num);
    int sum_odd_digits(int num);
    int append_digit(int num, int digit);
    int toBinary(int num);
    int toHexadecimal(int num);
    void int_to_string(int num);
    int mid_digit(int num);
    int delete_digit(int num, int digit);
    int add(IntType num1, IntType num2);
    int sub(IntType num1, IntType num2);
    int multiply(IntType num1, IntType num2);
    int divide(IntType num1, IntType num2);
    int toAscii(int num);
};