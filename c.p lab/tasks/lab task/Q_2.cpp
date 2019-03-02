#include <iostream>
#include <string>
using namespace std;





struct vehicle {

   string name;
   string color;
   string parts[5];

   int price;




};

int main()  {

    vehicle d1;
    vehicle d2;

    d1.name = "mebi";
    d1.color = "red";
    for(int i = 0; i < 5; i++)  {

       cin>>d1.parts[i];

    d2.price = 213; 

    cin<<d2.name;
    cin<<d2.color;
    for(int i = 0; i < 5; i++)  {
       cin>>d2.parts[i];

    cin<<d2.price;

    
    d1.name = d2.name;
    d1.color = d2.color;
    

    for(int i = 0; i < 5; i++)  {

        d2.parts[i] = d1.parts[i]; 
    }

    for(int i = 0; i < 5; i++)  {

        d1.parts[i] = d2.parts[i]; 
    }
    
    


return 0;
}
