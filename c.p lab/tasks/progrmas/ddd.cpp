#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string acidNaming(string acid_name) {
    string a;
    int m = acid_name.length();
    string b;
    string c = "hydro";
    string d = "ic";
    for (int i = 0; i < 5; i++){ 
        acid_name[i] = a[i];
        cout<<a[i];
    }
    for (int i = m - 2; i < m; i++) {
        acid_name[i] = b[i];
        cout<<b[i];
    }
    cout<<a<<"  "<<b; 
    for (int i = 0; i < 5; i++ ){
      cout<<a[i];
    }
  if (a == "c")
        return "non-metal acid";
    if (a != "hydro" and b == "ic")
        return "polyatomic acid";
    else 
        return "not an acid";
          
}

int main() {
  
        string acid_nae = "hydrochloroic";
       
        string result = acidNaming(acid_nae);
        cout << result << endl;
    
    return 0;
}




#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string k;
  string m;
  string name = "hydrochloric";
  string n = "hydro";
  for (int i = 0; i < 12; i++) {
    if (i >= 5 && i < 10)
      continue;
    if (i < 5)
      m += name[i];
      cout<<m[i];
    if (i >= 12-2)
      k[i] = name [i];
  } 
  
  return 0;




vector <int> revisedRussianRoulette(vector <int> doors) {

  int max = 0;
  int min = 0;
  doors.push_back(1);
  doors.push_back(2);
  for (int i = 0; i < doors.size() - 2; i++) {
    cout<<doors[i]<<" ";
    if (doors[i] == 1) {
      max = max + 1;
      doors[i] = 0;
      if (doors[i+1] == 1) {
        min = min + 1;
        max = max + 1;
        i = i + 1;
        doors[i] = 0;
        i = i - 1;
        
      }
   }
  }

   cout<<min<<" "<<max;


}




vector <int> revisedRussianRoulette(vector <int> doors) {

  int max = 0;
  int min = 0;
  doors.push_back(1);
  doors.push_back(2);
  int n = doors.size() - 2;
  for (int i = 0; i < n; i++) {
    cout<<doors[i]<<" ";
    if (doors[i] == 1) {
      max = max + 1;
      doors[i] = 0;
      if (doors[i+1] == 1) {
        min = min + 1;
        max = max + 1;
        i = i + 1;
        doors[i] = 0;
        i = i - 1;
      }
      
   }
  }

   cout<<min<<" "<<max;


}












