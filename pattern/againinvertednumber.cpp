#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
int number=1;
int i=1;
while (i<=n)
{
  
  int j=1;
  
  while (j<=n-i)
  {
     cout<<"  ";
     j=j+1;
  }
  int k=1;

  while (k<=i)
  {
     cout<<number<<" ";
     number=number+1;
     k=k+1;
  }
  cout<<endl;
  i=i+1;
  
}


    return 0;
}