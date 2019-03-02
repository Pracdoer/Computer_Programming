#include <iostream>
using namepace std;


void intializemarks()  {
    
     student p3;

     for (int i = 0 ; i < 5; i++)  {
           cin>>p3.marks[i];
     }

}  



void intializecourses()  {
    
     student p2;

     for (int i = 0 ; i < 5; i++)  
           cin>>p2.courses[i];

     for (int i = 0 ; i < 5; i++)  
           cout<<p2.courses[i];

}  


void intializename() {
   
    student p1;
    cin>>p1.firstname;
    cin>>p1.lastname;

    cout<<p1.firstname;
    cout<<p1.lastname;
}


void printdata()  {
    
     cout<<intializecourses();
     cout<<intializename();
     cout<<intializemarks();

}   
     

struct student {
    
     int id;
     string firstname;
     string lastname;
     string courses[5];
     double marks[5];
     double cgpa;

};



int main() {


    void intializename();
    void intializemarks();
    void intializecourses();


return 0;
}


