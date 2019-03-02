#include <iostream> 
#include <string>
using namespace std;

int main() {

   int num;
   int i = 0;

   cout<<"enter a number: "<<endl;  
   cin>>num;
     
   
   while ( num != 5)  {
        
        if (i >= 10 )  {

           cout<<"you are out of your mind :"<<endl;
           break; 
        }

        if (i < 10 and num == 5) {
               cout<<"yes"<<endl;
               break; 
            }

        else {
  
             cout<<"enter the number other than "<<i + 1<<endl;
             cin>>num;     
        }
         i++;         
      




   }

















return 0;
}
