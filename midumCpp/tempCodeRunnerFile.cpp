#include<iostream>
using namespace std;
 int main(){

int n;
cin>>n;

for (int i = 2; i <= n-1; i++)
{
   if ((n%i)==0)
   {
   cout<<"number is not a prime number";
   break;
   }
 
   
   }
 cout<<"number is prime number";  

    return 0;
}
