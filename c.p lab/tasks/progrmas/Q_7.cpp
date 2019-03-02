#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;


int main() {

   string name = "hello ";

   
   const char *cast = "world";
  
   string c = name + cast; 

   const char *C = c.c_str();

   cout<<c<<endl;
 
   string array[c.length()];

/*
   for(int i = 0; i < c.length(); i++) {

       if (c[i] == 'a' or c[i] == 'e' or c[i] == 'i' or c[i] == 'u' or c[i] == 'o')
                c[i] = 'z';
   }

  cout<<c<<endl;
*/

    
   // Reverse str[beign..end]

   reverse(c.begin(),c.end());
    
   cout << c;
   


return 0;
}

