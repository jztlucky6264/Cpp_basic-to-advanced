#include <iostream>
using namespace std;

int main() {
int n;
cin>> n;

int trick=0;
for (int i = 2; i <n; i++){

    if (n%i==0)
     {
         cout<<"not a prime number";
         trick=1;
         break;
     }
        }
         if (trick==0)  
      cout << "Number is Prime."<<endl;  

 return 0;   
}