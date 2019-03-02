#include <iosream>
using namespace std;

struct vehicle {

   string name;
   string color;
   string parts[5];

   int price;




};

struct honda {

    int model_no;
    int plate_no;

    vehicle car;

};


int main()  {


   honda d1;
   honda d2;

   d1.model_no = 123;
   d1.plate_no = 345;
   d1.car.name = "farrari";
   d1.car.color = "red";
   
   d1.car.parts = {"engine","handle","etc" , "etx","etv"};


   d2.model_no = 123;
   d2.plate_no = 345;
   d2.car.name = "farrari";
   d2.car.color = "red";
   
   d2.car.parts = {"engine","handle","etc" , "etx","etv"};


   cout<<d1<<d2;



 
