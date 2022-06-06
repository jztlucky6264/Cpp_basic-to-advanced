#include <iostream>
using namespace std;

void powerOfTwo(int n){

int count=0;
  while (n!=0)
  {
    if (n&1)
    {
      count++;
    }
    n=n>>1;
  }
  if (count==1)
  {
    cout<<" the given number is power of two ";
  }else{
  cout<<"given number is not power of two";
}}


int main() {

  int n;
  cin>>n;
  
    powerOfTwo(n);
    return 0;
}