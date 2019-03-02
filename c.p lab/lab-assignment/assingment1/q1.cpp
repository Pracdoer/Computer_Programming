#include <iostream>
#include <bits/stdc++.h>
#include <utility>
using namespace std;
// Swap the values of above three arrays
float swap(float a[], float b[] ,float c[]) {

  cout << "After swapping " << endl;
  swap(a , b);
  swap(a, c);
  swap(b, c);

return 0;
}

// Find and print the “repeated elements” in any of the above three arrays a, b and c.
float repeated(float a[], int n) {

  float num;
  cout << "the repeated elements are " ;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (*(a + i) == *(a + j))
        cout << *(a + i) << endl;
    }
  }

return 0;
}

// Find the Frequency of each element in "testArray"+
float frequncy(float testArray[], int sum) {

  int count = 0;
  for (int i = 0; i < sum; i++) {
    count = 0;
    for (int j = 0; j < sum; j++) {
      if (*(testArray + i) == *(testArray + j)) {
        count++;
      } 
    }
    cout << "the freq of " << i + 1 << " element is " << count << endl;
  }

return 0;
}

// Find and print the “common elements” from above three arrays a, b and c.
float commonelemnet(float a[], float b[], float c[], int n) {
	
	cout << " common elemnts are " <<endl;
	for (int i = 0; i < n; i++) {
    	for (int j = 0; j < n; j++) {
      		//if (*(a + i) == *(b + j) && *(a + i) == *(c + j))
      		if (*(a + i) == *(b + j)) {
      			if (*(a + i) == *(c + j)) 
          			cout << *(a + i) << endl;	
      		}
        }
    }
return 0;
}

// Find 3rd minimum and 5th maximum from "testArray".
float minmax(float testArray[], int sum) {

	sort(testArray, testArray + sum);
	cout << endl;
	cout << "the 3rd minimum is " << *(testArray + 2);
	cout <<" and 5th maximum is " << *(testArray + 10) << endl;

return 0;
}

// Search any value from testArray
float searchvalue(float testArray[], int sum) {

    float num;
    cout << endl;
    cout << "enter the value you wanna search" <<endl;
    cin >> num;
	for (int i = 0; i < sum; i++) {
    	if (*(testArray + i) == num)
        	cout << "your searched num is at index " << i << endl;
  }

return 0;
}

// Copy the values of three arrays into "testArray
float copyarray(float a[],float b[],float c[],float testArray[] , int sum , int n) {

	int j = 0;
  	for (int i = 0; i < sum; i++) 
  	{ 
    	if (j == 5)
      		j = 0;
    	if (i < n) 
      		*(testArray + i) = *(a + j);
    	if ( i >= n && i < sum - n)
      		*(testArray + i) = *(b + j);
    	if (i >= sum - n)  
      		*(testArray + i) = *(c + j);
    	j++;
  	}   
 	  cout << "The array with copied elements" << endl;
  	for (int i = 0; i < sum; i++)
  		cout << *(testArray + i) << " ";
 
return 0;
}

int main() { 

	int n; 
	cout << "enter the length of array " << endl;
	cin >> n;
	float a[n];
	float b[n];
	float c[n];
	int sum = n + n + n;
	float testArray[sum];

	cout << "enter the elements" << endl;
  	for (int i = 0; i < n; i++)
      	cin >> *(a + i);
  	for (int i = 0; i < n; i++)
        cin >> *(b + i);
  	for (int i = 0; i < n; i++)
  		cin >> *(c + i);
	copyarray(a , b, c, testArray, sum, n);
 	searchvalue(testArray, sum);
 	minmax(testArray, sum);
 	commonelemnet(a, b, c, n);
  frequncy(testArray, sum);
  repeated(a, n);
  swap(a, b, c);


return 0;
}
