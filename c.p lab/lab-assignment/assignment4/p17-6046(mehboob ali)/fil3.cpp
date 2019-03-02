#include <iostream>
using namespace std;

class velocity {

private:
	int dis;
	int time;

public:
	velocity() {

		int dis = 0;
		int time = 0;
	}	

	void initailze() {
		cout << "enter the distance " << endl;
		cin >> dis;
		cout << "enter the time " << endl;
		cin >> time;
	}

	velocity operator +(velocity d) {

		velocity temp;
		temp.dis = dis + d.dis;
		temp.time = time + d.time;
		return temp;
	} 

	velocity operator -(velocity d) {

		velocity temp;
		temp.dis = dis - d.dis;
		temp.time = time - d.time;
		return temp;
	} 

	velocity operator *(velocity d) {

		velocity temp;
		temp.dis = dis * d.dis;
		temp.time = time * d.time;
		return temp;
	} 

	velocity operator /(velocity d) {

		velocity temp;
		temp.dis = dis / d.dis;
		temp.time = time / d.time;
		return temp;
	} 
	bool operator >(velocity d){

		if(dis > d.dis && time > d.time) 
			return true;
		else 
			false;	
	}

	bool operator <(velocity d){

		if(dis < d.dis && time < d.time) 
			return true;
		else 
			false;	
	}

	bool operator >=(velocity d){

		if(dis >= d.dis && time >= d.time) 
			return true;
		else 
			false;	
	}

	bool operator <=(velocity d){

		if(dis <= d.dis && time <= d.time) 
			return true;
		else 
			false;	
	}

	bool operator ==(velocity d){

		if(dis == d.dis && time == d.time) 
			return true;
		else 
			false;	
	}

	bool operator !=(velocity d){

		if(dis != d.dis && time != d.time) 
			return true;
		else 
			false;	
	}

	void print() {

		cout << dis << endl;
		cout << time << endl;
	}
};

int main() {

	velocity s1, s2, s3;
	s1.initailze();
	s2.initailze();
	s3 = s1 + s2;
	s3.print();
	s3 = s1 - s2;
	s3.print();
	s3 = s1 * s2;
	s3.print();
	s3 = s1 / s2;
	s3.print();

	if (s1 >= s2) 
		cout << "s1 >= s2 " << endl;
	if (s1 <= s2) 
		cout << "s1 <= s2 " << endl;
	if (s1 == s2) 
		cout << "s1 == s2 " << endl;
	if (s1 != s2) 
		cout << "s1 != s2 " << endl;
	if (s1 > s2) 
		cout << "s1 > s2 " << endl;
	if (s1 < s2) 
		cout << "s1 < s2 " << endl;
}