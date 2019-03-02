#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int main() {


   int num = 1;
   cout<<num<<endl;
   int guess;
   int i = 0;
   


   while (guess != num) {
          
          int rand();
          guess = (rand() % 100);
          cout<<guess<<endl;
  
         if (guess == num) {
          
             cout<<"perfect"<<endl;
             cout<<"you got " <<i + 1<<" guesses"<<endl; 
         }
      
         if (guess > num) 
        
                 cout<< "its too high"<<endl;
         
         if (guess < num) 
   
                 cout<<"its too low"<<endl;


         i++;

    }
       

return 0;
}
