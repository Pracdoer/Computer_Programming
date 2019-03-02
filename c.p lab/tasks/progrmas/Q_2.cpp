#include <iostream>
#include <string>
using namespace std;



int main() {

  int chiose ;

  cout<<"choise your favoriovte bevarge"<<endl;
  cout<<"1. sprite"<<endl;
  cout<<"2. sevenup"<<endl;
  cout<<"3. Dew"<<endl;
  cout<<"4. sting"<<endl;
  cout<<"5. pepsi"<<endl;

  cout<<"enter your chiose from 1 - 5: "<<endl;
  cin>>chiose;

  switch(chiose)  {

      case 1:
          cout<<"you choise sprite ";
          break;
      case 2:
          cout<<"you choise sevenup ";
 	  break;
      case 3: 
          cout<<"you chiose Dew";
      case 4:
          cout<<"you choise sting";
          break;
      case 5:
          cout<<"you chiose pepsi";
          break;
      default:
          cout<<"error take your maony back";
          break;
}










return 0;
}
