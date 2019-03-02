#include <iostream>
using namespace std;


int main() {
 
    double k;

    int n = 0;

    int a1[] = {1,2,3,4,5};
  
    double a2[] = {2.0,4.4,5.6,3.6,7.0};
  
    char a3[] = {'a','b','c','d','e'};
   
    int *x ;
    x = a1;

    double *y;
 
    y = a2;

    char *z;
   
    z = a3;

/*   for (int i = 0; i < 10 ; i++) {
  
         cout<<"enter first array's element"<<endl;

         cin>>*(x + i);
  
         cout<<*(x + i)<<endl;
    
    }

  
   for (int i = 0; i < 10 ; i++) {
  
         cout<<"enter first array's element"<<endl;

         cin>>*(y + i);
  
         cout<<*(y + i)<<endl;
    
    }


    for (int i = 0; i < 10 ; i++) {
  
         cout<<"enter first array's element"<<endl;

         cin>>*(z + i);
  
         cout<<*(z + i)<<endl;
    
    }
*/

   for (int i = 0; i < 10 ; i++) {
  
         if (islower(*(z + i)))
              *(z + i) = toupper(*(z + i));

         cout<<*(z + i)<<endl;
    
    }




    for (int i = 0; i < 10 ; i++) {
  
         if (*(x + i) > n)
    
              n = *(x + i);
    
    }
    cout<<"max from int is "<<n<<endl;


    for (int i = 0; i < 10 ; i++) {
  
         if (*(y + i) > *(y + (i + 1))) 
              
              k = *(y + (i + 1));
    
    }

    cout<<"2nd m







 return 0;
}
