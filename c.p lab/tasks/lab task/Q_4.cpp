#include <iostream>
#include <string>
using namespace std;


struct booktype {

    string title;
    string authors[4];
    int isbn_no;
    int price;
    int publish;
    int copies;

};


int main() {

    booktype d1[5];

    for(int i = 0; i < 5; i++)  {

         cin>>d1[i].title;
         cin>>d1[i].isbn_no;     
         cin>>d1[i].price;
         cin>>d1[i].publish;
         cin>>d1[i].copies;
         
        for (int j = 0 ; j < 4; j++) {

               cin>>d1[i].authors[j];
        }

     }

return 0; 
}

