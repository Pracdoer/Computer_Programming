#include <iostream>
#include <string>
using namespace std;


int main()  {


    int score;
     
    cout<<"enter your grading score b/w 1 : 100: "<<endl;
    cin>>score;

    if (score == 100)  
        cout<<"you got perfect:";

    if (score >=90 and score < 100) 
      
        cout<<"you got A";

    if (score >=80 and score < 90) 
    
        cout<<"you got A-";

    if (score >=70 and score < 80)
 
       cout<<"you got B";

    if (score >=60 and score < 70) 
   
       cout<<"you got C";

    if ( score >=50 and score < 60)
       
           cout<<"you got D";

    if(score < 50) 
        cout <<"you got F";  



return 0;
}
