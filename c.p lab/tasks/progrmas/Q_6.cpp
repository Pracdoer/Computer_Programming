#include <iostream>
#include <string>
using namespace std;



int fun(int m) {
  
    cout<<"hello"<<endl;
 
    for(int i = 0; i < m; i++) 
        cout<<"hello"<<endl;
}


int fun2(int x , int y)  {

     int res;
     res = x * y;
     cout<<res<<endl;

return 0;
}



int half(int v) {
  
    cout<<"v  = "<<v<<endl;

    int res1;
    res1 = v /2;
  
    if (res1 > 0) 
        half(res1);
       

}

int main() {
 
   int n = 5;
   
   fun(n);
 
   fun2(3,4);
    
   half(100);


return 0;
}
