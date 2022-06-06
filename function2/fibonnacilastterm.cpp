#include <iostream>
using namespace std;

  int fibonnacci(int n){
   switch (n)
   {
   case 1:return 0;
     break;
   case 2: return 1;
   break;
   }
   
    int a=0,b=1;
    int nextterm;
    for (int i = 3; i <=n; i++)
    {
     nextterm=a+b;
     a=b;
     b=nextterm;
    }
    return nextterm;
  }


int main() {

    int n;
    cin>>n;
     
   int nthTerm=fibonnacci(n);

cout<<nthTerm<<endl;
    return 0;
}