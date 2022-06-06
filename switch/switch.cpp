#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

   int a ,b;
   cout<<" enter the value of a " << endl;  
   cin>>a;

   cout<<" enter the value of b "<< endl;
   cin>>b;

   char op;
   cout<<" enter the operation you want to perform "<< endl;
   cin>>op;

   switch ( op )
   {
   case '+':cout<<" the sum of a and b is : "<< a+b<<endl;
       break;
   
   case '-':cout<<" the substraction of a and b is : "<< a-b<<endl;
       break;
       case '/':cout<<" the division of a and b is : "<< a/b<<endl;
       break;
       case '*':cout<<" the multiply of a and b is : "<< a*b<<endl;
       break;
       case '%':cout<<" the modulo of a and b is : "<< a%b<<endl;
       break;
   default: cout<<" enter the valid opertaion "<< endl;
       break;
   }


    return 0;
}