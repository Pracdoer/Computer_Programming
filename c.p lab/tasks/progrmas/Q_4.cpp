#include <iostream>
#include <string>
using namespace std;


int main()  {
    
    int persoon = 0;
    int m;
    int person = 0;
    int n = 0; 
    int Pancake;
    int array[9];


    cout<<"enter number of Pancake you ate : "<<endl;
    for (int i = 0 ; i < 10 ; i++)  {

          cin>>Pancake;
          
          if (Pancake > n) { 
                n = Pancake;
                m = pancake;
                person = i;
          }
          array[i] = Pancake;

          if (Pancake < m) {
                m = array[i];
                m = pancake;
                persoon = i;
          }
          
    }
  
    cout<<"list of eaters:  " <<endl;

    for (int i = 0; i < 10 ; i++) 
     
         cout<<"person   "<< i + 1 << "  eat "<<array[i]<<endl;

 
    cout<<" person   " << person + 1 <<"  eat "<< n <<"  Pancake "<<endl;
    cout<<" person " << persoon + 1 <<"  eat " << m <<"  Pancake"<<endl;

   
















return 0;
}
