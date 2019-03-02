#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void recursiveSort(double array[], int n, int size) {
    if (size  == n)
        return;

        if (array[size] > array[size + 1]) {
          swap(array[size], array[size + 1]);
          size = -1;
        }
    recursiveSort(array, n , size + 1);
}

int main() 
{
    int size;
    int n = 0;
    cout << "enter the length of array " << endl;
    cin >> size;
    double array[size];
    
    for (int i = 0; i < size; i++) {
        cout << "enter an element " << endl; 
        cin >> array[i];
    }
    recursiveSort(array, size - 1, n);
    cout << "before sorting " << endl;
    for(int i = 0; i < size; i++)
      cout << array[i] << "  ";
    cout << endl;
    cout << "after sorting " << endl;
    for(int i = 0; i < size; i++)
       cout << array[i] << "  ";
    
return 0;
}