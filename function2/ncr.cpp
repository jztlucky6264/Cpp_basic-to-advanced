#include <iostream>
using namespace std;

int factorial(int num){

int prod=1;

    for (int i = 1; i <=num; i++)
    {
        prod=prod*i;
    }
    return prod;
}

int main() {

  int n,r;
  cin>>n>>r;

  int ncr= factorial(n)/(factorial(r)*factorial(n-r));
  cout<<" the ncr is "<< ncr<< endl;


    return 0;
}