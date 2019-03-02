#include <iostream>
#include <sstream>
using namespace std;

const int limit = 100; 

class fraction {
  private:
    string frac, arr[limit];
    long n;
    long d;
  public:

    friend ostream & operator << (ostream &out, fraction &f1);
    friend istream & operator >> (istream &c, fraction &f1);


    long getnum(int a, int b) {
        n = a;
        d = b; 
    }

    long cheak_divine(long a, long b) {
      long j;
      if(a < b)
        j = a;
      else 
        j = b;
      for(int i = 2; i <= j; i++) {
        if(a % i == 0 and b % i == 0) {
            a = a / i;
            b = b / i;
        }
      }
      return getnum(a, b);
    }

    long converter(fraction f) {
      string a = "";
      string b = "";
      int count;
      int n = f.frac.length();
      long x, y;

      for(int i = 0; i < n; i++) {
        if(f.frac[i] == '/') 
            count = i;
      }

      for(int i = 0; i < n; i++) {
        if (i > count)
            b += f.frac[i];
        else   
            a += f.frac[i]; 
      }
      stringstream str1(a);
      stringstream str2(b);
      str1 >> x;
      str2 >> y;
      return cheak_divine(x, y); 
    }

//////////////////////// Unary opertors /////////////////////
    void operator -() {
      n = -n;
      d = d;
    }

    void operator ++()  {
      n = (d * 1) + n;
      d = d;
    }


    fraction operator ++(int)  {
      fraction temp;
      temp.n = n;
      temp.d = d;
      n = (d * 1) + n;
      d = d;
      return temp;
    }

    void operator --() {
      n = (d * -1) + n;
      d = d;
    }

    fraction operator --(int)  {
      fraction temp;
      temp.n = n;
      temp.d = d;
      n = (d * -1) + n;
      d = d;
      return temp;
    }
        
////////////// Binary opertors ////////////////////////
    fraction operator +(fraction f1) {
        fraction temp;
        temp.n = (n * f1.d) + (f1.n * d);
        temp.d = d * f1.d;
        return temp;
    }

    fraction operator -(fraction f1) {
        fraction temp;
        temp.n = (n * f1.d) - (f1.n * d);
        temp.d = d * f1.d;
        return temp;
    }

    fraction operator *(fraction f1) {
      fraction temp;
      temp.n = (n * f1.n);
      temp.d = d * f1.d;
      long j;
      if(temp.n < temp.d)
        j = temp.n;
      else 
        j = temp.d;
      for(int i = 2; i <= j; i++) {
        if(temp.n % i == 0 and temp.d % i == 0) {
            temp.n = temp.n / i;
            temp.d = temp.d / i;
        }
      }
      return temp;
    }

    fraction operator /(fraction f1) {
      fraction temp;
      temp.n = (n * f1.d);
      temp.d = d * f1.n;
      return temp;
    }

    long operator %(fraction f1) {
      long x, y, z;
      x = n * f1.d;
      y = d * f1.n;
      z  = x % y;
      return z;
    }

////////////////////// Relational opertors /////////////////////
    bool operator >(const fraction f1) {
      double a = (double)f1.n / f1.d;
      double b = (double)n / d;
      if (b > a)
        return true;
      else 
        return false;
    }

    bool operator <(const fraction f1) {
      double a = (double)f1.n / f1.d;
      double b = (double)n / d;
      if (b < a)
        return true;
      else 
        return false;
    }

    bool operator >=(const fraction f1) {
      double a = (double)f1.n / f1.d;
      double b = (double)n / d;
      if (b >= a)
        return true;
      else 
        return false;
    }

    bool operator <=(const fraction f1) {
      double a = (double)f1.n / f1.d;
      double b = (double)n / d;
      if (b <= a)
        return true;
      else 
        return false;
    }

    bool operator ==(const fraction f1) {     
      double x = (double)f1.n / f1.d;
      double y = (double)n / d;
      if (x == y)
        return true;
      else 
        return false;
    
    }

    bool operator !=(const fraction f1) {      
      double a = (double)f1.n / f1.d;
      double b = (double)n / d;
      if (a != b)
        return true;
      else 
        return false;    
    }

////////////////////// assignemt opertors ////////////////////
    void operator =(const fraction f1) {
        n = f1.n;
        d = f1.d;
    }

////////////////////// array[] opertors /////////////////////
    string& operator [](int n) {
      if (n < 0 || n >= limit) {
        cout << "\nIndex out of bounds" << endl;
      }
      else 
        return arr[n];   
    }
};

////////Friend Function//////////////

istream & operator >> (istream &c, fraction &f1) {
      cout << "enter the fraction: " << endl;
      c >> f1.frac;
      f1.converter(f1);
      return c;
}

ostream & operator << (ostream &c, fraction &f1) {

  if (f1.d == 1)
    c << f1.n;
  else
    c << f1.n << "/" << f1.d;

  return c;
}

///////////// Main ////////////////
int main() {

  int n;
  fraction f1, f2, f3;
  cin >> f1;
  cin >> f2; 
  f3 = f1 + f2;

  cout <<"------------------------\n";
  cout << "addition of two objects is " << f3 << endl;
  f3 = f1 - f2;
  cout << "subtraction of two objects is " << f3 << endl;
  f3 = f1 * f2;
  cout << "multiplication of two objects is " << f3 << endl;
  f3 = f1 / f2;
  cout << "divine of two objects is " << f3 << endl;
  cout << "modolus is " << f1 % f2 << endl;

  if (f2 == f1)
    cout << f2 << " and " << f1 << " are equal " << endl;
  if (f2 != f1)
    cout << f2 << " and " << f1 << " are not equal " << endl;
  if (f2 > f1) 
    cout << f2 << " is greater than " << f1 << endl;
  if (f2 < f1) 
    cout << f2 << " is less than " << f1 << endl;
  if (f2 >= f1) 
    cout << f2 << " is greater than or equal to " << f1 << endl;
  if (f2 <= f1) 
    cout << f2 << " is less than or equal to " << f1 << endl;

//////// Overloading  Assignemt opertor ////////////////////
  cout << f1 << endl;
  cout << f2 << endl;
  f2 = f1;
  cout << f1 << endl;
  cout << f2 << endl;

///////////// overloading unary oopertor ////////////////////// 
  cout << "unary overloading " << endl;
  cout << f1 << endl;
  cout << f2 << endl;
  -f1;
  -f2;
  cout << f1 << endl;
  cout << f2 << endl;
  ++f1;
  ++f1;
  cout << f1 << endl;
  cout << f1 << endl;
  f3 = f2++;
  f3++;
  cout << f3 << endl;
  cout << f3 << endl;

///////////// Overloading Array opertor //////////////
  cout << "enter the length of array you want to " << endl;
  cin >> n;
  cout << "enter the elements " << endl; 
  for(int i = 0; i < n; i++){
      cin >> f3[i];
  }
  
  cout << "elements of array are " << endl; 
  for(int j = 0; j < n; j++) {
    string temp = f3[j];
    cout << temp << "  ";
  }
}



