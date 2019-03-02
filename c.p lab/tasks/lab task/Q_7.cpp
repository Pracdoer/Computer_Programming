#include <iostream>
using namespace std;


int main() {


    int x[] = {1,2,3,4,5};

    int y[] = {1,2,3,4,5};


    int z[5];


    int *a;

    a = x;

    int *b;
    b = y;

    int *c;
    c = z;

   for (int i = 0; i < 5; i++) {

          *(c + i) = *(a + i) + *(b + i);

           cout<<*(c + i)<<endl;
   } 






return 0;

}




