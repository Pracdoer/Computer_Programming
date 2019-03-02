///////////////////
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(int array[], int first , int last) {
    int point = array[last];
    int i = first - 1;

    for (int j = first; j <= last - 1; j++) {

        if (array[j] <= point) {

            i++;
            swap(array[i],array[j]);   
        } 
    }
    swap(array[i + 1], array[last]);
return (i+1);
}

int quick_sort(int array[], int first, int last) {

    if (first < last) {

        int piont = partition(array, first, last);
        quick_sort(array, first, piont - 1);
        quick_sort(array, piont + 1, last);
    }
return 0;
}

int main() {

    int n;
    cout << "enter length of array " << endl;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++) {
        cout << "enter an element " << endl;
        cin >> array[i];
    }
    cout << "before sorting" << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    int first = 0;
    int last = n - 1;
    quick_sort(array, first , last);

    cout << "after sorting " << endl;
    for (int i = 0; i < n; i++)
        cout << array[i] << " " ;
return 0;
}