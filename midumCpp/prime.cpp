#include<iostream>
using namespace std;
 int main(){

int n;
cin>>n;
int flag=0;
int i=2;

   while (i<n)
   {
      if ((n%i)==0)
      {
        cout<<"given number is not prime";
        flag=1;
        break;
      }
      i=i+1;
   }
   if (flag==0)
   {
      cout<<"give number is a prime number";

   }
   
    return 0;
}
