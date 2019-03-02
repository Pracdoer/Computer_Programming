#include <iostream>
#include <string>
using namespace std;



int main() {
 

    char array [5][5];
    int len;
    string str;
    string key = "COLLEGE"; 
    int len1 = key.length();
    
/*     

    len = str.length() - 2;

    for(int i = 1; i <= len; i++)  {

         if(int (str[i]) > 64 && int (str[i]) <  123) {

             	if (int (str[i]) > 90 && int (str[i]) <  97) {
                       
                     continue;
                }
      
             //cout<<str[i]<<endl;
         }
    }


    for(int i = 1; i <= len; i++)  {
    
         if (islower(str[i])) {
     
              str[i] = toupper(str[i]);
              //cout<<str[i]<<endl;
         }
    }

*/ 

    char  a = 'A';
    for (int i = 0; i < 5; i++) {
         for(int j = 0; j < 5; j++) {
             
              if(sizeof(array)/4 > 6) {
                  
                     array[i][j] = a;
                     a = int(a) + 1;
              }

              else if (sizeof(array)/4 <= 6)  {
            
                      for(int i = 0; i <  5; i++) {
        
                             for(int j = 0; j < 5; j++)  {
                                 
                                  if (array[i][j] == key[j])
                                        continue;
                             }
                     }
              }

              else
                  array[i][j] = key[j];


        }
     
    }


 
   /* char  a = 'A';
    for(int i = 0; i <  5; i++) {
        
         for(int j = 0; j < 5; j++)  {
    
               array[i][j] = a;
               //cout<<array[i][j];
               a = int(a) + 1;
         }
        // cout<<endl;
     
    }
   
 */       
    for (int i = 0; i < 5; i++) {
         for(int j = 0; j < 5; j++) {


             cout<<array[i][j];
         }
         cout<<endl;
    }
return 0;
}


/*{
 

    char array [5][5];
    int len;
    string str;
    string key = "COLLEGE"; 
    sort( key.begin(), key.end() ) ;
    cout<<key;
    int len1 = key.length();
    
    int m = 5;
    char  a = 'A';
    for (int i = 0; i < 5; i++) {
         for(int j = 0; j < 5; j++) {
                  if (a == 'I') {
                    a = int(a) + 1;
                    j--;
                    continue;
                    }
                  else if (m == 5){
                    for (int i = 0; i < 5; i++) {
                        for(int j = 0; j < 5; j++) {
                          if (array[i][j] == a)
                            continue;
                        }
                    }
                  }  
                  else {      
                    array[i][j] = a;
                    a = int(a) + 1;
                  }
         }
    }

return 0;
}*/
