#include <iostream>
#include "IntType.h"
#include <sstream>
using namespace std;


void IntType::setNum(int num){
        n  = num;
    }
void IntType::printNum() {
        cout << n << endl;
    }
int IntType::get() {
	return n;
}

int IntType::numLength(int num) {

	int count = 0, rem;
        while (num != 0) {
            rem = num % 10;
            num = num / 10;
            count++;
        }
        return count;
}
int IntType::reverseNum(int num) {

        int rem, rev = 0 ;
        while (num != 0) {
            rem = num % 10;
            rev = (rev * 10) + rem;
            num = num / 10;
        }
        cout << "your reverseNumber is " << rev << endl;
        return rev;
    }
int IntType::sum_all_digits(int num) {
        int sum = 0, rem;
        while (num != 0) {

            rem = num % 10;
            num = num / 10;
            sum = sum + rem;
        }
        cout << "the sum of all digits is " << sum << endl;
        return sum;
    }
int IntType::avg_of_digits(int n) {
	float avg; 
	int sum, no;
	sum = sum_all_digits(n);
	no =  numLength(n);
	avg = sum / no;
    cout << "the avg_of_digits is " << avg << endl;
    return avg;
    }
bool IntType::pallindrom(int num) {
        int n = num;
        int rem, rev = 0;
        while (num != 0) {
            rem = num % 10;
            rev = (rev * 10) + rem;
            num = num / 10;
        }
        if (n == rev) { 
          return true;
        }
        return false;
    }
int IntType::remainder(int num) {

        int v = num % 10;
        cout <<"the remainder of number is " << v << endl;
        return v;
    }
int IntType::count_evens(int num) {
        int count = 0, rem;
        while (num != 0) {
            rem = num % 10;
            if (rem % 2 == 0)
                count++;
            num = num / 10;
        }
        cout << "even digits are " << count << endl;
        return count;
    }
int IntType::count_odds(int num) {
        int count = 0, rem;
        while (num != 0) {
            rem = num % 10;
            if (rem % 2 != 0)
                count++;
            num = num / 10;
        }
        cout << "odd digits are " << count << endl;
        return count;
    }
int IntType::max_digit(int num) {

        int n = 0, rem;
        while (num != 0) {
            rem = num % 10;
            if (rem >  n)
                n = rem;
            num = num / 10;
        }
        cout << "max digit is " << n << endl;
        return n;
    }
int IntType::min_digit(int num) {

        int n , rem;
        n = num % 10;
        while (num != 0) {
            rem = num % 10;
            if (rem <=  n)
                n = rem;
            num = num / 10;
        }
        cout << "min digit is " << n << endl;
        return n;
    }
int IntType::sum_even_digits(int num) {

        int sum = 0 , rem;
        while (num != 0) {
            rem = num % 10;
            if (rem % 2 == 0)
                sum = sum + rem;
            num = num / 10;
        }
        cout << "sum of even digits is " << sum << endl;
        return sum;
    }
int IntType::sum_odd_digits(int num) {

        int sum = 0 , rem;
        while (num != 0) {
            rem = num % 10;
            if (rem % 2 != 0)
                sum = sum + rem;
            num = num / 10;
        }

        cout << "sum of odd digits is " << sum << endl;
        return sum;
    }
int IntType::append_digit(int num, int digit) {
        int n = digit;
        while (n != 0) {
            num *= 10;
            n = n / 10;
        }
        cout << "new number is " << num + digit << endl;
        return num + digit;
    }
int IntType::toBinary(int num) {
        int bin;
        cout << "The binary equivalent of " << num << " is ";
        while (num > 0) {
      
            bin = num % 2;
            cout << bin;
            num /= 2;
    }
    cout << endl;
    return 0;
}
int IntType::toHexadecimal(int num) {
        int rem, quotient, i = 1;
        char hexa[10];
        quotient = num;
        while(quotient!=0) {
            rem = quotient % 16;
            if( rem < 10)
                rem = rem + 48;
            else
                rem = rem + 55;
            hexa[i++]= rem;
            quotient = quotient / 16;
        }
        cout<<"hexadecimal equivalent of "<< num <<" is ";
        for(int j = i -1 ; j > 0; j--)
            cout << hexa[j];
        cout << endl;
        return 0;
}
int IntType::toAscii(int num) {

	cout << "the asscii value is " << char (num) << endl;
	return char (num);
}
void IntType::int_to_string(int num) {
	string s;
	stringstream convert;
	convert << num;
	s = convert.str();
	cout <<"the sring " <<  s << endl;
}
int IntType::mid_digit(int num) {
	int a, rem, length;
	length = numLength(num);

	if (length % 2 != 0) {
    	cout << "The mid digit is " ;
    	int n = ((length - 1) / 2) + 1;
    	int count  = 0;
    	while (num != 0) {

      		if (count == n) {
        		a = rem;
        		cout << a << endl;
       			break;
      		}
      		else {
        		rem = num % 10;
      			count++;
      			num = num / 10;
      		}
    	}
  	}
  	else {
    	cout << "The mid digit are " ;
    	int count = 0;
    	int n = length/ 2;
    	while (num != 0) {

      		if (count == n) {
        	a = rem;
        	rem =  num % 10;
        	cout << rem << " and "<< a << endl;
        	break;
      		}
      		else {
        		rem = num % 10;
        		count++;
        		num = num / 10;
      		}
  		}
	}

}
int IntType::delete_digit( int num, int digit) {
	int array[40], rem, i = 0;
    cout << "orignal number " << num << endl;
    cout << "after deleting "; 
    while (num != 0) {
      rem = num % 10;
      num = num / 10;
      if (rem == digit) {
        rem = 0;
        i--;
      }
      else 
        array[i] = rem;
        i++;
    } 
  i--;
  while(i != -1) {
    cout << array[i];
    i--;  
  }
  cout << endl; 
}
int IntType::add(IntType num1, IntType num2) {
	int n = num1.get();
	int m = num2.get();
	return n + m;

}
int IntType::sub(IntType num1, IntType num2) {
	int n = num1.get();
	int m = num2.get();
	return n - m;

}
int IntType::multiply(IntType num1, IntType num2) {
	int n = num1.get();
	int m = num2.get();
	return n * m;
}
int IntType::divide(IntType num1, IntType num2) {
	int n = num1.get();
	int m = num2.get();
	return n / m;
}
