#include <iostream>
#include <string>
using namespace std;

int main() {

	int temp;
	int a[2][2][5];

	for(int i = 0; i < 2; i++) {
    	for(int j = 0; j < 2; j++)  
        	for (int k = 0; k < 5; k++)  {
            
            	cout<<"enter elements in array "<<endl;
                cin>>a[i][j][k];
           }      
	}

        cout<<"The array before sorting "<<endl;
        cout<<endl;
	for(int i = 0; i < 2; i++) {
    	for(int j = 0; j < 2; j++) {   
        	for (int k = 0; k < 5; k++)  {
          
            	cout<<a[i][j][k]<<"   ";
              
           }
           cout<<endl;
        }
	}

	for(int i = 0; i < 2; i++) {
   		for(int j = 0; j < 2; j++)  {
        	for (int k = 0; k < 5; k++)  {
                
            	if (a[i][j][k] > a[i][j][k+1]) {
                	temp = a[i][j][k+1];
                	a[i][j][k+1] = a[i][j][k];
                	a[i][j][k] = temp; 
                        
                    i = 0;
                    j = 0;
                    k = -1;
                }
            }
        }
	}
        cout<<endl;
	cout<<"The array after Sorting "<<endl;
        cout<<endl;
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {  
			for (int k = 0; k < 5; k++)  {
                    
            	cout<<a[i][j][k]<<"   ";
              
            }

            cout<<endl;
        }
	}



return 0;
}
